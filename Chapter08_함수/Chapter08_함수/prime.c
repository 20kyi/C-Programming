/* 소수 찾기 */

#include <stdio.h>

int get_integer() {
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	return n;
}

int is_prime(int n) {
	//int i;

	if (n <= 1)
		return 0;

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int n, result;
	n = get_integer();

	/*if (is_prime(n) == 1)
		printf("%d은 소수입니다.\n", n);
	else
		printf("%d은 소수가 아닙니다.\n", n);
	return 0;*/

	printf("1부터 %d 사이의 소수: ", n);
	for (int i = 2; i <= n; i++) {
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	printf("\n");
}

