/* ��ȯ ȣ�� */

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
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("%d!�� %d�Դϴ�.\n", n, fatorial(n));
	return (0);
}