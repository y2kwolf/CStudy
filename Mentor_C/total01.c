#include <stdio.h>

int main(void)
{
	//int num1, num2;
	//printf("NUM1 : ");
	//scanf_s("%d", &num1);
	//printf("NUM2 : ");
	//scanf_s("%d", &num2);
	//printf("%d && %d = %d\n", num1, num2, num1 && num2);	// 1
	//printf("%d || %d = %d\n", num1, num2, num1 || num2);	// 1
	//printf("%d & %d = %d\n", num1, num2, num1 & num2);		// 2
	//printf("%d | %d = %d\n", num1, num2, num1 | num2);		// 11

	//int n, number, result;
	//printf("10���� ���� �Է� : ");
	//scanf_s("%d", &n);
	//printf("�������� ����ұ��? 8������ 1�Է�, 16������ 2�Է� : ");
	//scanf_s("%d", &number);
	//result = number == 1 ? printf("��� : %o\n", n) : printf("��� : %x\n", n);

	//int num, result;
	//printf("�������� ������ : ");
	//scanf_s("%d", &num);
	//int a = num / 10;
	//int b = num / 10 + 1;
	//result = num % 10 == 0 ? a : b;
	//printf("�ʿ��� �ٱ����� �� : %d", result);

	//float num;
	//int result;
	//printf("NUM : ");
	//scanf_s("%f", &num);
	//result = (int)num % 10;
	//printf("�Է��� ������ 1�� �ڸ��� = %d\n", result);

	int num, second, minute, hour;
	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	hour = num / 3600;
	minute = (num % 3600) / 60;
	second = (num % 3600) % 60;
	printf("%d�ð� %d�� %d��", hour, minute, second);

	return 0;
}