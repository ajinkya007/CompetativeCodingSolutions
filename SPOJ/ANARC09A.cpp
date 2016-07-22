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

using namespace std;

int main()
{
	int T = 1;
	while(1){
		char S[2001], ch;
		int top = 0, count = 0, i = 0;
		scanf("%s",S);
		if(S[0] == '-') {
			break;
		}
		while(S[i] != '\0') {
			ch = S[i];
			if(ch == '{')
				top++;
			else if(ch == '}' && top == 0) {
				count++;
				top++;
			}
			else {
				top--;
			}
			i++;
		}
		printf("%d. %d\n", T++, (top/2)+count);
	}
	return 0;
}
