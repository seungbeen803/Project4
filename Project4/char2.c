#include<stdio.h>
main() {
	char question[] = "is Seoul the capital city of Korea?(y or n)";
	char answer[5];

	printf("%s", question);
	scanf("%s", answer);

	if (answer[0] == 'y')
		printf("�¾ҽ��ϴ�.\n");
	else
		printf("Ʋ�Ƚ��ϴ�.\n");

	system("pause");
}