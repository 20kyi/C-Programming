/* �Ҽ� ã�� */

#include <stdio.h>

int get_integer() {
	int n;

	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	return 0;*/

	printf("1���� %d ������ �Ҽ�: ", n);
	for (int i = 2; i <= n; i++) {
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	printf("\n");
}

