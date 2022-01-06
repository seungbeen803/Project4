#include<stdio.h>
main() {
	char question[] = "is Seoul the capital city of Korea?(y or n)";
	char answer[5];

	printf("%s", question);
	scanf("%s", answer);

	if (answer[0] == 'y')
		printf("맞았습니다.\n");
	else
		printf("틀렸습니다.\n");

	system("pause");
}