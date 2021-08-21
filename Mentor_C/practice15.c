#include <stdio.h>

/* 
// 1번문제
void calculator(int a, int b)
{
	printf("두정수의 덧셈: %d\n", a + b);
	printf("두정수의 뺄셈: %d\n", a - b);
	printf("두정수의 곱셈: %d\n", a * b);
	printf("두정수의 나눗셈: %d\n", a / b);
}

int main(void)
{
	int a, b;

	printf("두 개의 정수값을 입력하세요: ");
	scanf("%d %d", &a, &b);
	
	calculator(a, b);

	return 0;
}
*/

/*
// 2번 문제
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

	printf("두 개의 정수값을 입력하세요: ");
	scanf("%d %d", &a, &b);

	result = totalBetween(a, b);

	printf("%d와 %d 사이의 정수의 총합은 %d\n", a, b, result);

	return 0;
}
*/

/*
// 3번 문제
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

	printf("한 개의 정수값을 입력하세요: ");
	scanf("%d", &a);

	int b = a + 200;
	result = getBetween(a, b);

	printf("%d과 %d 사이 7의 배수는 %d개입니다.\n", a, b, result);
}
*/


// 4번 문제
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

	printf("키를 cm 단위로 입력하세요: ");
	scanf("%d", &a);

	result = cmtom(a);
	printf("결과: %.2f m\n", result);
}


//int main(void)
//{
//	float num;
//	num = (float)181 / 100;
//	printf("%.2f\n", num);
//
//	return 0;
//}