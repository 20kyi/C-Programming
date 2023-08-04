/* 난수 발생기 */

#define SEED 17	// 정적 전역 변수로 선언 -> random.c 안에서만 모든 함수 접근 가능

// 전역변수 
int MULT = 25173;
int INC = 13849;
int MOD = 65536;

// 정적 전역 변수
static unsigned int seed = SEED;	// 난수 생성 시드값

// 정수 난수 생성 함수
// 0에서 M-1 사이의 난수 생성
unsigned random_i(void) {
	seed = (MULT * seed + INC) % MOD;	// 난수의 시드값 설정
	return seed;
}

// 실수 난수 생성 함수
// 0.0에서 1.0 사이의 난수 생성
double random_f(void) {
	seed = (MULT * seed + INC) % MOD;	// 난수의 시드값 설정
	return seed / (double)MOD;			// 0.0에서 1.0 사이로 제한
}