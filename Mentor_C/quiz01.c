/*
���ϸ�: quiz01.c
�ۼ���: ����
�ۼ���: 2021-07-29
����: <Broca�� �񸸵� ���� ���α׷�>
�������Ʈ: https://pro-gen.tistory.com/20
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	float weight, height;
	float stweight; // ǥ��ü��
	float obesity; // �񸸵�

	printf("<Broca�� �񸸵� ���� ���α׷�>\n\n");

	printf("1. Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%f", &height);
	printf("2. ü���� �Է��Ͻÿ�(kg): ");
	scanf("%f", &weight);
	
	printf("\n==================================\n\n");

	stweight = (height - 100) * 0.9;
	obesity = (weight / stweight) * 100;

	printf("<�������>\n\n");

	printf("* ǥ��ü��: %.2f\n", stweight);
	printf("* �񸸵�: %.2f\n", obesity);
	printf("* �񸸵� �����: ");
	if (obesity < 80)
		printf("���� ��ô");
	else if (obesity >= 80 && obesity < 90)
		printf("��ô");
	else if (obesity >= 90 && obesity < 110)
		printf("����");
	else if (obesity >= 110 && obesity < 120)
		printf("��ü��");
	else if (obesity >= 120 && obesity < 130)
		printf("��(�浵)");
	else if (obesity >= 130 && obesity < 150)
		printf("��(������)");
	else
		printf("��(��)");
	
	printf("\n");

	//getch();
	system("pause > null");

	return 0;
}