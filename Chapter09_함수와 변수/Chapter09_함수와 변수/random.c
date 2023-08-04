/* ���� �߻��� */

#define SEED 17	// ���� ���� ������ ���� -> random.c �ȿ����� ��� �Լ� ���� ����

// �������� 
int MULT = 25173;
int INC = 13849;
int MOD = 65536;

// ���� ���� ����
static unsigned int seed = SEED;	// ���� ���� �õ尪

// ���� ���� ���� �Լ�
// 0���� M-1 ������ ���� ����
unsigned random_i(void) {
	seed = (MULT * seed + INC) % MOD;	// ������ �õ尪 ����
	return seed;
}

// �Ǽ� ���� ���� �Լ�
// 0.0���� 1.0 ������ ���� ����
double random_f(void) {
	seed = (MULT * seed + INC) % MOD;	// ������ �õ尪 ����
	return seed / (double)MOD;			// 0.0���� 1.0 ���̷� ����
}