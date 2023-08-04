/* 지역 변수의 생존 시간 */

#include <stdio.h>

int main() {
	int i;

	// for루프 중괄호도 블록에 속함
	for (i = 0; i < 5; i++) {
		int temp = 1;	
		// 블록이 시작할 때 마다 생성되어 초기화
		// temp는 블록 안 선언 => 지역변수
		// 블록이 시작될 때 생성, 블록 끝나면 소멸

		printf("temp = %d\n", temp);

		temp++;	// 블록이 끝나면 temp 소멸 후 1로 초기화 됨 => 2가 출력되지 않는다.
	}
	return 0;
}