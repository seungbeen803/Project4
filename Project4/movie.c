#include<stdio.h>
main() {
	int ratings[3][4] = {
		{4, 6, 2, 9}, //���� ��а�
		{7, 8, 3, 7}, //���� ��ȭ
		{6, 9, 7, 6}
	};
	//��а� 1�� ��ȭ�� ���� �������
	for (int i = 0; i < 4; i++) {
		printf("%d \t", ratings[2][i]);
	}
	printf("\n");
	//��ȭ 1�� ���� �� ��а����� ������ ���
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
	//��а� 2�� ������ ��ձ��ϱ�
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += ratings[1][i]; //��а� 2�� ������ ��
	}
	printf("��а� 2�� ������ %d \t ����� %4.2f\n",sum, sum / 4.0);
	//��ȭ 4�� ���� ������ ��ձ��ϱ�
	sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += ratings[i][3]; //��ȭ 4�� ������ ��
	}
	printf("��ȭ 4�� ������ %d \t ����� %4.2f\n", sum, sum / 3.0);
	system("pause");
}