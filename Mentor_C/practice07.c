#include <stdio.h>

int main(void)
{
	//int num = 3;
	//if (num == 2)
	//{
	//	printf("state 1\n");
	//}
	//else if (num > 2 && num < 4)
	//{
	//	printf("state 2\n");
	//}
	//else if (num == 3)
	//{
	//	printf("state 3\n");
	//}
	//else
	//{
	//	printf("state 4\n");
	//}



	//int num;
	//printf("������ �Է��ϼ��� : ");
	//scanf_s("%d", &num);
	////printf(num % 2 == 0 ? "�Է��� ������ ¦���Դϴ�.\n" : "�Է��� ������ Ȧ���Դϴ�.\n");
	//if (num % 2 == 0)
	//	printf("�Է��� ������ ¦���Դϴ�.\n");
	//else
	//	printf("�Է��� ������ Ȧ���Դϴ�.\n");
	


	int num;
	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (num < 6 || num >= 65)
	{
		printf("����ö ����� �����Դϴ�.\n");
	}
	else if (num >= 6 && num < 13)
	{
		printf("����ö ����� 500���Դϴ�.\n");
	}
	else if (num >= 13 && num < 19)
	{
		printf("����ö ����� 900���Դϴ�.\n");
	}
	else if (num >= 19 && num < 65)
	{
		printf("����ö ����� 1250���Դϴ�.\n");
	}



	//float avg = (88 + 90 + 98 + 81 + 99 + 88) / 6.0;
	//int result;
	//result = (int)avg;

	//printf("�߰���� ��������� %.2f�̰�,\n", avg);

	//if (result >= 90)
	//{
	//	printf("A�����Դϴ�.\n");
	//}
	//else if (result >= 80 && result < 90)
	//{
	//	printf("B�����Դϴ�.\n");
	//}
	//else if (result >= 70 && result < 80)
	//{
	//	printf("C�����Դϴ�.\n");
	//}
	//else if (result >= 60 && result < 70)
	//{
	//	printf("D�����Դϴ�.\n");
	//}
	//else
	//	printf("F�����Դϴ�.\n");
		
	
	return 0;
}