/*
파일명: section06.c
작성자: 진상영
작성일: 2021-06-18
내용: 논리 연산자와 비트 단위 연산자
1) 논리 연산자: 이항연산자(&&, ||), 단항연산자(!)
2) 삼항 조건 연산자: 조건?결과1:결과2
3) 비트 단위 연산자: &, |, ^, ~
4) 시프트 연산자: <<, >>
*/

#include <stdio.h>

int main(void)
{
	// 논리 연산자
	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;
	printf("result 1 : %d\n", result);	// 1
	result = num1 == 20 && num2 == 10;
	printf("result 2 : %d\n", result);	// 1
	result = num1 > num2 && num1 == num2;
	printf("result 3 : %d\n", result);	// 0 

	printf("\n");

	// 삼항 조건 연산자
	int num, absolute;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	absolute = num > 0 ? num : num * -1;
	printf("절대값: %d\n", absolute);

	printf("\n");

	// 비트 단위 연산자
	int a = 3; // 00000011 
	int b = 5; // 00000101
	printf("3 & 5 = %d\n", a & b);	// AND
	printf("3 | 5 = %d\n", a | b);	// OR
	printf("3 ^ 5 = %d\n", a ^ b);	// XOR
	printf("~3 = %d\n", ~a);		// NOT

	printf("\n");

	// 시프트 연산자
	int x, y;
	x = 1;

	y = x << 2;
	printf("%d << 2 = %d\n", x, y);
	y = x >> 2;
	printf("%d >> 2 = %d\n", x, y);

	return 0;
}