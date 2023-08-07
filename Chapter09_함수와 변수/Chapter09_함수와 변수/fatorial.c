/* 순환 호출 */

#include <stdio.h>

long fatorial(int n) {
	printf("fatorial(%d)\n", n);

	if (n == 1)
		return 1;
	else
		return n * fatorial(n - 1);
}

int main(void) {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf("%d!은 %d입니다.\n", n, fatorial(n));
	return (0);
}