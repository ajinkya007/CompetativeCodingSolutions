#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m,total,brought;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int ans=0;
        // Computer answer
        brought = n/c;
        total = brought +(brought-1)/(m-1);
        cout<<total<<endl;
    }
    return 0;
}﻿
