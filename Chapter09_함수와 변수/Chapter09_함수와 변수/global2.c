/* 전역변수의 초기 값과 생존 시간 */

#include <stdio.h>

int counter;	// 전역 변수는 자동으로 0 초기화

int main() {
	printf("counter=%d\n", counter);
	return 0;
}