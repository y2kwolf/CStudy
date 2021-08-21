/*
파일명: section14.c
작성자: 진상영
작성일: 2021-08-10
내용: 함수의 이해
1) 함수의 정의와 선언
- 사용자 정의 함수
- 함수 선언과 정의 분리하기
: 선언분- 함수의 형태를 선언하며 반환형, 함수명, 매개변수 포함
: 정의부- 함수의 기능을 정의하며 반환형, 함수명, 매개변수, 몸체 포함

2) 함수의 형태
- 입력값과 반환값 모두 있는 경우
- 입력값만 존재하는 경우
- 반환값만 존재하는 경우
- 입력값과 반환값 모두 없는 경우

*/

#include <stdio.h>
/* 

// 사용자 정의 함수 선언
int add(int a, int b)
{
	// 입력받은 두 개의 값을 더하여 반환
	return a + b;
}

int main(void)
{
	int result;

	// 사용자 정의 함수 호출
	result = add(3, 5);
	printf("함수가 반환한 값: %d\n", result);
	
	return 0;
}

*/

// 함수 선언과 정의 분리하기
// add 함수의 원형(선언부)
int add(int a, int b);

int main(void)
{
	int result;

	result = add(3, 5);
	printf("함수가 반환한 값: %d\n", result);

	return 0;
}

// add 함수의 기능(정의부)
int add(int a, int b)
{
	return a + b;
}