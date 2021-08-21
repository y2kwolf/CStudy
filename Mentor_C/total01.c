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
	//printf("10진수 정수 입력 : ");
	//scanf_s("%d", &n);
	//printf("몇진수로 출력할까요? 8진수는 1입력, 16진수는 2입력 : ");
	//scanf_s("%d", &number);
	//result = number == 1 ? printf("결과 : %o\n", n) : printf("결과 : %x\n", n);

	//int num, result;
	//printf("복숭아의 개수는 : ");
	//scanf_s("%d", &num);
	//int a = num / 10;
	//int b = num / 10 + 1;
	//result = num % 10 == 0 ? a : b;
	//printf("필요한 바구니의 수 : %d", result);

	//float num;
	//int result;
	//printf("NUM : ");
	//scanf_s("%f", &num);
	//result = (int)num % 10;
	//printf("입력한 숫자의 1의 자리수 = %d\n", result);

	int num, second, minute, hour;
	printf("초를 입력하세요 : ");
	scanf_s("%d", &num);
	hour = num / 3600;
	minute = (num % 3600) / 60;
	second = (num % 3600) % 60;
	printf("%d시간 %d분 %d초", hour, minute, second);

	return 0;
}