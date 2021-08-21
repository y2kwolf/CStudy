/*
파일명: section11.c
작성자: 진상영
작성일: 2021-07-03
내용: 포인터와 배열


*/

#include <stdio.h>

int main(void)
{
	//int myArr[3] = {1,2,3};
	//printf("배열 각 요소의 주소 확인\n");
	//printf("배열의 이름: %p\n", myArr);
	//printf("첫번째 요소: %p\n", &myArr[0]);
	//printf("두번째 요소: %p\n", &myArr[1]);
	//printf("세번째 요소: %p\n", &myArr[2]);



	short sarr[3] = { 1, 2, 3 };
	int iarr[3] = { 10, 20, 30 };
	// 인덱스 번호를 통한 접근
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);
	// 포인터 연산을 통한 접근
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));
	// 주소확인
	printf("%p %p %p\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%p %p %p\n", &iarr[0], &iarr[1], &iarr[2]);



	//int n1 = 3, n2 = 6, n3 = 9;
	//// 포인터 변수의 선언 및 초기화
	//int* ptr1 = &n1;
	//int* ptr2 = &n2;
	//int* ptr3 = &n3;
	//// 포인터 배열의 선언 및 초기화
	//int* parr[3] = { ptr1, ptr2, ptr3 };
	//// 주소에 들어있는 값을 출력하고 각 주소를 출력
	//printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
	//printf("%p %p %p\n", parr[0], parr[1], parr[2]);



	return 0;
}