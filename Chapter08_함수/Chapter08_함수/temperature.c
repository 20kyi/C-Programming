/* �µ���ȯ�� */

#include <stdio.h>

void printOptions() {
	printf(" 'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf(" 'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf(" 'p' ����\n");
}

// �����µ����� ȭ���µ���
double C2F(double c_temp) {
	return 9.0 / 5.0 * c_temp + 32;
}
// ȭ���µ����� �����µ���
double F2C(double f_temp) {
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main() {
	char choice;
	double temp;
	while (1) {
		printOptions();
		printf("�޴����� �����ϼ���.");
		choice = getchar();
		// q�� ������ ����
		if (choice == 'q')
			break;
		// c�� ������ ����->ȭ�� ��ȯ
		else if (choice == 'c') {
			printf("�����µ�: ");
			scanf_s("%lf", &temp);
			printf("�����µ�: %lf \n", C2F(temp));
		}
		// f�� ������ ȭ��->���� ��ȯ
		else if (choice == 'f') {
			printf("ȭ���µ�: ");
			scanf_s("%lf", &temp);
			printf("�����µ�: %lf \n", F2C(temp));
		}
		getchar();	// ����Ű ���ڸ� �����ϱ� ���Ͽ� �ʿ�
	}
}