/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
/*

All submissions for this problem are available.

Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.



Program is very simple, Given two integers A and B, write a program to add these two numbers.

Input

The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.
Output

Add A and B and display it.
Constraints

    1 ≤ T ≤ 1000
    1 ≤ A,B ≤ 10000

Example

Input
3 
1 2
100 200
10 40

Output
3
300
50

Solution:
*/
#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    cout<<a+b<<endl;
	}
	return 0;
}
