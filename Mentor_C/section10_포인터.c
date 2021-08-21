/*
파일명: section10.c
작성자: 진상영
작성일: 2021-06-26
내용: 포인터의 소개
1) 포인터 이해
2) 포인터 연산
- 참조연산자 (*) 
  ① 변수생성시-포인터 변수 생성 
  ② 일반연산시-포인터가 가리키는 값 반환
- 주소연산자 (&): 해당 변수의 주소값 반환

*/

#include <stdio.h>

int main(void)
{
	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char *cptr = &cnum;
	//int *iptr = &inum;
	//double *dptr = &dnum;

	//printf("%p\n", cptr);
	//printf("%p\n", iptr);
	//printf("%p\n", dptr);
	//printf("=========================\n");
	//printf("%p\n", &cnum);
	//printf("%p\n", &inum);
	//printf("%p\n", &dnum);


	int num = 20;
	int* pnum;
	pnum = &num;

	*pnum = 20;
	printf("num: %d\n", num);
	(*pnum)++;
	(*pnum)++;
	printf("num: %d\n", num);
	printf("*pnum: %d\n", *pnum);
			

	return 0;
}