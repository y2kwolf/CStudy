/*
���ϸ�: section09.c
�ۼ���: ����
�ۼ���: 2021-06-24
����: 1�����迭
1) �迭���� �� �ʱ�ȭ
2) ���ڿ� �����

*/

#include <stdio.h>

int main(void)
{
	//int i;
	//int odd[3];
	//int even[5] = { 2, 4, 6, 8, 10 };
	//odd[0] = 1;
	//odd[1] = 3;
	//odd[2] = 5;
	//printf("%d %d %d\n", odd[0], odd[1], odd[2]);
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", even[i]);
	//}
	//printf("\n");


	char mind[30] = "I Love programming!";
	printf("%s\n", mind);
	mind[7] = '\0';
	printf("%s\n", mind);
	mind[1] = '\0';
	printf("%s\n", mind);


	//char str[50];
	//printf("���ڿ��� �Է��ϼ��� : ");
	//scanf("%s", str);
	//printf("�Էµ� ���ڿ� : %s\n", str);


	return 0;
}