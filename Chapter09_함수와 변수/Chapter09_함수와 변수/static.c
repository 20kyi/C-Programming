/* static 지정자 (정적 변수) */

#include <stdio.h>

void sub() {
	static int scount = 0;		
	// 정적 지역 변수로 선언됨
	// sub()에서 정적 지역 변수 scount를 선언, sub 호출될 때 마다 변수 증가
	// 정적 지역 변수는 자동 지역 변수와 달리 함수 호출 끝났어도 소멸 X => 이전 값 유지

	int acount = 0;		
	// 지역 변수로 선언됨, sub 종료 시 자동 소멸

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