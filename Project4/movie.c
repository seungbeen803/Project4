#include<stdio.h>
main() {
	int ratings[3][4] = {
		{4, 6, 2, 9}, //행은 평론가
		{7, 8, 3, 7}, //열은 영화
		{6, 9, 7, 6}
	};
	//평론가 1이 영화에 대한 평점출력
	for (int i = 0; i < 4; i++) {
		printf("%d \t", ratings[2][i]);
	}
	printf("\n");
	//영화 1에 대한 각 평론가들의 평점을 출력
	for (int i = 0; i < 3; i++) {
		printf("%d \t", ratings[i][0]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("m[%d][%d]=%d\t", i, j, ratings[i][j]);
		}
	}
	printf("\n");
	//평론가 2의 총점과 평균구하기
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += ratings[1][i]; //평론가 2의 평점의 합
	}
	printf("평론가 2의 총점은 %d \t 평균은 %4.2f\n",sum, sum / 4.0);
	//영화 4에 대한 총점과 평균구하기
	sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += ratings[i][3]; //영화 4의 평점의 합
	}
	printf("영화 4의 총점은 %d \t 평균은 %4.2f\n", sum, sum / 3.0);
	system("pause");
}