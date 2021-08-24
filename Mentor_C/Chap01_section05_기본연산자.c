/*
파일명: section05.c
작성자: 진상영
작성일: 2021-06-18
내용: 기본연산자
1) 산술연산자: +, -, *, /, %
2) 부호연산자: +, -  -> 피연산자가 하나인 경우
3) 대입연산자: =, +=, -=, *=, /=, %=
4) 관계/비교연산자: <, >, ==, !=, <=, >=
5) 증감연산자: ++, --
6) 연산자 우선순위
*/

#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 3;

	// 산술연산자
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	printf("\n");

	// 대입연산자
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num1 += 3의 결과:%d\n", num1 += 3);
	printf("num2 -= 3의 결과:%d\n", num2 -= 3);

	printf("\n");

	// 비교연산자
	int a = 10, b = 11;
	printf("a = %d\n", a);
	printf("n = %d\n", b);
	printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);

	printf("\n");

	// 증감연산자
	int x = 10, y = 10;
	printf("x : %d\n", x);
	printf("x : %d\n", ++x); // 증가 후 출력(전위 Prefix)
	printf("x : %d\n", x);

	printf("y : %d\n", y);
	printf("y : %d\n", y++); // 출력 후 증가(후위 Postfix)
	printf("y : %d\n", y);	

	// 연산우선순위
	int n1 = 3, n2 = 5;
	int result = n1++ + n2 * 3;
	printf("연산 결과 : %d\n", result);

	return 0;
}