#include <stdio.h>

/* 
// 1������
void calculator(int a, int b)
{
	printf("�������� ����: %d\n", a + b);
	printf("�������� ����: %d\n", a - b);
	printf("�������� ����: %d\n", a * b);
	printf("�������� ������: %d\n", a / b);
}

int main(void)
{
	int a, b;

	printf("�� ���� �������� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);
	
	calculator(a, b);

	return 0;
}
*/

/*
// 2�� ����
int totalBetween(int a, int b)
{
	int i;
	int total = 0;
	for (int i = a + 1; i < b; i++)
	{
		total += i;
	}

	return total;
}

int main(void)
{
	int a, b, result;

	printf("�� ���� �������� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	result = totalBetween(a, b);

	printf("%d�� %d ������ ������ ������ %d\n", a, b, result);

	return 0;
}
*/

/*
// 3�� ����
int getBetween(int a, int b)
{
	int i;
	int count = 0;
	for (int i = a + 1; i < b; i++)
	{
		if (i % 7 == 0)
			count++;
	}

	return count;
}

int main(void)
{
	int a, result;

	printf("�� ���� �������� �Է��ϼ���: ");
	scanf("%d", &a);

	int b = a + 200;
	result = getBetween(a, b);

	printf("%d�� %d ���� 7�� ����� %d���Դϴ�.\n", a, b, result);
}
*/


// 4�� ����
int cmtom(int a)
{
	float meter;
	meter = (float)a / 100;

	return meter;
}
int main(void)
{
	int a;
	float result;

	printf("Ű�� cm ������ �Է��ϼ���: ");
	scanf("%d", &a);

	result = cmtom(a);
	printf("���: %.2f m\n", result);
}


//int main(void)
//{
//	float num;
//	num = (float)181 / 100;
//	printf("%.2f\n", num);
//
//	return 0;
//}