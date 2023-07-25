/* 온도변환기 */

#include <stdio.h>

void printOptions() {
	printf(" 'c' 섭씨온도에서 화씨온도로 변환\n");
	printf(" 'f' 화씨온도에서 섭씨온도로 변환\n");
	printf(" 'p' 종료\n");
}

// 섭씨온도에서 화씨온도로
double C2F(double c_temp) {
	return 9.0 / 5.0 * c_temp + 32;
}
// 화씨온도에서 섭씨온도로
double F2C(double f_temp) {
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main() {
	char choice;
	double temp;
	while (1) {
		printOptions();
		printf("메뉴에서 선택하세요.");
		choice = getchar();
		// q를 누르면 종료
		if (choice == 'q')
			break;
		// c를 누르면 섭씨->화씨 변환
		else if (choice == 'c') {
			printf("섭씨온도: ");
			scanf_s("%lf", &temp);
			printf("섭씨온도: %lf \n", C2F(temp));
		}
		// f를 누르면 화씨->섭씨 변환
		else if (choice == 'f') {
			printf("화씨온도: ");
			scanf_s("%lf", &temp);
			printf("섭씨온도: %lf \n", F2C(temp));
		}
		getchar();	// 엔터키 문자를 삭제하기 위하여 필요
	}
}