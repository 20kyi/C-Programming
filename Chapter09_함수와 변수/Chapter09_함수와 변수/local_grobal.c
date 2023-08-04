/* 같은 이름의 전역 변수와 지역 변수 */

#include <stdio.h>

int sum = 1;	// 전역 변수

int main() {
	int sum = 0;	// 지역 변수

	printf("sum = %d\n", sum);	// 지역변수와 전역변수 이름 같은 경우, 지역변수 참조됨
	return 0;
}