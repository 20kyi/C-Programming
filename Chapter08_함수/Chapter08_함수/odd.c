/* 정수의 합을 계산하는 odd 함수 */

#include <stdio.h>

// 정수 입력받는 함수
int get_integer() {
	int value;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &value);
	return value;
}

int add(int x, int y) {
	return x + y;
}

int main(void) {
	int x = get_integer();
	int y = get_integer();

	int sum = add(x, y);
	printf("두 수의 합은 %d입니다. \n", sum);
	return 0;
}