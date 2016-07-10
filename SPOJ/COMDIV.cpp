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
#include<math.h>

int numdiv(int N) {
	int ans = 0, i;
	for(i = 1; i <= sqrt(N); i++) {
		if(N % i == 0) {
			ans += 2;
			if(N/i == i) {
				ans--;
			}
		}
	}
	return ans;
}

int gcd(int A, int B) {
	if(B == 0) {
		return A;
	}
	return gcd(B, A%B);
}

int comdiv(int A, int B) {
	return numdiv(gcd(A, B));
}

int main() {
	int T, t, A, B;
	scanf("%d", &T);
	for(t = 0; t < T; t++) {
		scanf("%d%d", &A, &B);
		printf("%d\n", comdiv(A, B));
	}
	return 0;
}
