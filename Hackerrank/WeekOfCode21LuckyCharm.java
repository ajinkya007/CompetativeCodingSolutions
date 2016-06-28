/*
Lena is preparing for important coding competition that is preceded by N sequential preliminary contests. She believes in "saving luck", and wants to check her theory. Each contest is described by two integers, Li and Ti:

  Li is the amount of luck that can be gained by winning the contest. If Lena wins the contest, her luck balance will decrease by Li; if she loses it, her luck balance will increase by Li .
  Ti denotes the contest's importance rating. It's equal to 1 if the contest is important, and it's equal to 0 if it's unimportant.

If Lena loses no more than K important contests, what is the maximum amount of luck she can have after competing in all the preliminary contests? This value may be negative.

Input Format

The first line contains two space-separated integers, N(the number of preliminary contests) and K(the maximum number of important contests Lena can lose), respectively.
Each line i of the N subsequent lines contain two space-separated integers, Li(the contest's luck balance) and Ti(the contest's importance rating), respectively.

Constraints:
1.1<= N <= 100
2.0<=K<=N
3.1<= Li <= 10^4
4.0<= Ti <=1

Output Format

Print a single integer denoting the maximum amount of luck Lena can have after all the contests.

Sample Input

6 3
5 1
2 1
1 1
8 1
10 0
5 0

Sample Output

29

Explanation

There are N = 6 contests. Of these contests,4 are important (so she cannot lose any more than of them)K=3. Lena maximizes her luck if she wins 3rd the important contest (where Li=1) and loses all of the other five contests for a total luck balance of 29.﻿
*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int l[] = new int[n];
        int t[] = new int[n];
        int i = 0, j = 0; int lb=0; int imp=0;
        int test = n ;
        while(test-->0){
            l[i]= in.nextInt();
            t[i]= in.nextInt();
            if(t[i]==0)
                lb+=l[i];
            else imp++;
            //System.out.print(l[i]+ "  " + t[i] + " ");
            i++;
        }
        //System.out.println(Arrays.toString(l));
        //System.out.println(Arrays.toString(t));
        //System.out.println();
        int win = imp - k;
        int im[] = new int[imp];
        j=0;
        for(int p = 0;p < n;  p++){
            if(t[p]==1)
                im[j++]=l[p];
        }
        Arrays.sort(im); 
        //System.out.println(Arrays.toString(im));
        for(i = 0;i<imp;i++){
                if(i<win)
                    lb-=im[i];
                 else lb+=im[i];
            }
        
        System.out.println(lb);
        
    }
}
