/*
파일명: section14.c
작성자: 진상영
작성일: 2021-08-10
내용: 함수의 이해
1) 함수의 정의와 선언

*/

#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;
	result = add(3, 5);
	printf("함수가 반환한 값: %d\n", result);
	
	return 0;
}