/* static ������ (���� ����) */

#include <stdio.h>

void sub() {
	static int scount = 0;		
	// ���� ���� ������ �����
	// sub()���� ���� ���� ���� scount�� ����, sub ȣ��� �� ���� ���� ����
	// ���� ���� ������ �ڵ� ���� ������ �޸� �Լ� ȣ�� ����� �Ҹ� X => ���� �� ����

	int acount = 0;		
	// ���� ������ �����, sub ���� �� �ڵ� �Ҹ�

	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);
	scount++;
	acount++;
}

int main() {
	sub();
	sub();
	sub();
	return 0;
}