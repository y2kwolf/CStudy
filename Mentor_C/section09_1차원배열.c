/*
파일명: section09.c
작성자: 진상영
작성일: 2021-06-24
내용: 1차원배열
1) 배열선언 및 초기화
2) 문자열 입출력

*/

#include <stdio.h>

int main(void)
{
	//int i;
	//int odd[3];
	//int even[5] = { 2, 4, 6, 8, 10 };
	//odd[0] = 1;
	//odd[1] = 3;
	//odd[2] = 5;
	//printf("%d %d %d\n", odd[0], odd[1], odd[2]);
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", even[i]);
	//}
	//printf("\n");


	char mind[30] = "I Love programming!";
	printf("%s\n", mind);
	mind[7] = '\0';
	printf("%s\n", mind);
	mind[1] = '\0';
	printf("%s\n", mind);


	//char str[50];
	//printf("문자열을 입력하세요 : ");
	//scanf("%s", str);
	//printf("입력된 문자열 : %s\n", str);


	return 0;
}