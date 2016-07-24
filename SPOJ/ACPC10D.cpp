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

#include<stdio.h>
#include<iostream>
#include<limits.h>

using namespace std;

int min(int a, int b) {
	if(a < b) return a;
	return b;
}

int min(int a, int b, int c, int d) {
	return min(min(a, b), min(c, d));
}

int main() {
	int N, i, j, tc = 0;
	cin>>N;
	while(N > 0) {
		tc++;
		int A[N][3];
		for(i = 0; i < N; i++) {
			for(j = 0; j < 3; j++) {
				cin>>A[i][j];
			}
		}
		int DP[N-1][5];
		DP[0][0] = INT_MAX;		
		DP[0][1] = INT_MAX;
		DP[0][2] = A[0][1];
		DP[0][3] = A[0][1] + A[0][2];
		DP[0][4] = INT_MAX;

		for(i = 1; i < N; i++) {
			DP[i][0] = DP[i][4] = INT_MAX;
			for(j = 1; j < 4; j++) {
				DP[i][j] = A[i][j-1] + min(DP[i][j-1], DP[i-1][j-1], DP[i-1][j], DP[i-1][j+1]);
			}
		}

		printf("%d. %d\n", tc, DP[N-1][2]);
		cin>>N;
	}
	return 0;
}

