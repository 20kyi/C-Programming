/* 하노이탑 문제 */

#include <stdio.h>

void hanoi_tower(int n, int from, int tmp, int to);

int main() {
	hanoi_tower(4, 'A', 'B', 'C');
}

void hanoi_tower(int n, int from, int tmp, int to) {
	if (n == 1)
		printf("원판 1을 %c에서 %c으로 옯긴다.\n", from, to);
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, from, to, tmp);
	}
}