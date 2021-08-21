/*
파일명: section02.c
작성자: 진상영
작성일: 2021-06-17
내용: 변수와 자료형
1) 변수
2) printf() 함수 변수 출력
3) 자료형: 정수(문자)- char / 정수- short, int, long, long long / 실수- float, double, long double
4) 상수: 리터럴 / 심볼릭 / 매크로 상수
5) 자료형변환: 자동형변환 / 명시적형변환
*/

#include <stdio.h> // 표준 함수 사용을 위한 헤더 파일 선언
#define LENGTH 10 // 매크로 상수 정의에는 세미콜론(;)을 사용하지 않는다.

int main(void)
{
	// 문자열 출력
	printf("Hello C!\n"); // Hello C!를 출력합니다.
	printf("\n");
	
	// 변수와 자료형
	int num1 = 3;
	printf("%d\n", num1); //형식지정자를 이용한 변수 출력
	int num2 = 5;
	printf("%d\n", num2);
	printf("정수형(int)의 크기 = %dbyte\n", sizeof(10));
	printf("실수형(float)의 크기 = %dbyte\n", sizeof(3.14));
	printf("\n");

	// 문자열
	printf("%c\n", 66);
	printf("%c\n", 'B');
	printf("%c\n", 67);
	printf("%c\n", 68);
	printf("\n");

	// 상수
	const int NUMBER = 5; //심볼릭 상수 선언
	printf("%d\n", LENGTH);
	printf("%d\n", NUMBER);
	printf("\n");

	// 자동형변환
	double number1 = 10; // 10.0으로 변환
	int number2 = 3.14159;
	short number3 = 70000;
	printf("%f\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
	printf("\n");

	// 명시적형변환
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (float)10);
	printf("%f\n", (double)10);
	printf("\n");

	printf("오늘의 주제: 변수와 자료형\n");
	printf("프로그램 작성자: 홍길동\n");
	printf("프로그램 작성일: 2021.02.23\n");

	return 0;
}