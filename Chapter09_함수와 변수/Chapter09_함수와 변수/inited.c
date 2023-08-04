/* 한번만 초기화하기 */
//	정적 지역 변수에 시도 횟수 저장
//	정적 지역 변수는 지역변수지만 소멸 X, 값 유지 
//	사용자가 초기화 시 정적 지역 변수를 1로 설정

#include <stdio.h>
#include <stdlib.h>

void init();

int main() {
	init();
	init();
	init();
	return 0;
}

void init() {
	static int inited = 0;
	if (inited == 0) {
		printf("init(): 네트워크 장치를 초기화합니다. \n");
		inited = 1;
	}
	else {
		printf("init(): 이미 초기화되었으므로 초기화하지 않습니다. %d \n", inited);
	}
}