/* 자동차 경주 프로그램 */
/* 사용자가 키를 누를 때 마다 1초씩 주행 */
/* 주행 거리는 *로 화면에 표시 */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) {
	int i;

	printf("CAR #&d: ", car_number);
	for (i = 0; i < distance / 10; i++)
		printf("*");
	printf("\n");
}

int main() {
	int i;
	int car1_dist = 0, car2_dist = 0, car3_dist = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) {
		car1_dist += rand() % 100;
		car2_dist += rand() % 100;
		car3_dist += rand() % 100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		disp_car(3, car3_dist);
		printf("-----------------------------\n");
		_getch();	// 사용자가 아무 키나 누르기를 기다린다.
	}
}