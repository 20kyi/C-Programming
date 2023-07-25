/* max함수를 호출하여 사용자가 입력한 값 중 더 큰 값 찾기 */

#include <stdio.h>

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main(void) {
	int x, y;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &x);
	printf("정수를 입력하세요: ");
	scanf_s("%d", &y);

	int larger;
	larger = max(x, y);
	printf("더 큰 값은 %d입니다. \n", larger);
	return 0;
}