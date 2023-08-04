/* 전역 변수 */

#include <stdio.h>

// 함수 외부에 선언된 변수 => 전역 변수
// 범위 : 소스 파일 전체, 모든 함수에서 접근 가능
// add, main 함수에서 모두 사용 가능
int A;
int B;

int add() {
	return A + B;
}

int main() {
	int answer;	// 지역 변수
	A = 5;
	B = 7;
	answer = add();
	printf("%d + %d = %d\n", A, B, answer);
	return 0;
}