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

/*
// 4번 문제
void convertCmToM(int height)
{
	float meter;
	meter = height / 100.0;
	printf("결과: %.2f m\n", meter);
}

int main(void)
{
	int height;

	printf("키를 cm 단위로 입력하세요: ");
	scanf("%d", &height);

	convertCmToM(height);

	return 0;
}
*/


// 5번 문제

void convertSecToTime(int sec)
{
	int hours, minutes, seconds;

	seconds = sec % 60;
	minutes = (sec / 60) % 60;
	hours = sec / 3600;

	printf("결과: %d시간 %d분 %d초\n", hours, minutes, seconds);
}

int main(void)
{
	int second;

	printf("초를 입력하세요: ");
	scanf("%d", &second);

	convertSecToTime(second);

	return 0;
}