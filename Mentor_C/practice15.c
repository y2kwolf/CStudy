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

/*
// 4�� ����
void convertCmToM(int height)
{
	float meter;
	meter = height / 100.0;
	printf("���: %.2f m\n", meter);
}

int main(void)
{
	int height;

	printf("Ű�� cm ������ �Է��ϼ���: ");
	scanf("%d", &height);

	convertCmToM(height);

	return 0;
}
*/


// 5�� ����

void convertSecToTime(int sec)
{
	int hours, minutes, seconds;

	seconds = sec % 60;
	minutes = (sec / 60) % 60;
	hours = sec / 3600;

	printf("���: %d�ð� %d�� %d��\n", hours, minutes, seconds);
}

int main(void)
{
	int second;

	printf("�ʸ� �Է��ϼ���: ");
	scanf("%d", &second);

	convertSecToTime(second);

	return 0;
}