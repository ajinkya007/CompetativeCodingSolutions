﻿#include<stdio.h>
#include<iostream>

using namespace std;

long long int A[2001];

long long int HT[2001][2001];

long long int max(long long int a, long long int b) {
	if(a > b) return a;
	return b;
}

long long int solve(long long int start, long long int end, long long int day) {
	if(HT[start][end] != -1) {
		return HT[start][end];
	}
	long long int ans;
	if(end == start) {
		ans = day*A[start];
		HT[start][end] = ans;
		return ans;
	}
	ans = max(A[start]*day+solve(start+1, end, day+1), A[end]*day+solve(start, end-1, day+1));
	HT[start][end] = ans;
	return ans;
}

