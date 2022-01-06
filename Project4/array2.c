#include<stdio.h>
#define SIZE 6
main() {
	int s[3][5] = {
		{30, 20, 10, 40, 50}, //첫 번째 행의 요소들의 초기값
		{50, 60, 40, 80, 30}, //두 번째 행의 요소들의 초기값
		{20, 80, 90, 65, 72}  //세 번째 행의 요소들의 초기값
	};
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("s[%d][%d]=%d\n", i, j, s[i][j]);
		}
		printf("\n");
	}
	system("pause");
}