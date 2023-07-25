/* 난수 생성 프로그램 */
/*  1. 항상 같은 번호 생성 방지
	2. 최대값 설정 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main() {
	int i;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++)
		printf("%d  ", 1 + rand() % MAX);
	printf("\n");
	return 0;
}