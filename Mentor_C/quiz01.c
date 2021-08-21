/*
파일명: quiz01.c
작성자: 진상영
작성일: 2021-07-29
내용: <Broca식 비만도 측정 프로그램>
참고사이트: https://pro-gen.tistory.com/20
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	float weight, height;
	float stweight; // 표준체중
	float obesity; // 비만도

	printf("<Broca식 비만도 측정 프로그램>\n\n");

	printf("1. 키를 입력하시오(cm): ");
	scanf("%f", &height);
	printf("2. 체중을 입력하시오(kg): ");
	scanf("%f", &weight);
	
	printf("\n==================================\n\n");

	stweight = (height - 100) * 0.9;
	obesity = (weight / stweight) * 100;

	printf("<측정결과>\n\n");

	printf("* 표준체중: %.2f\n", stweight);
	printf("* 비만도: %.2f\n", obesity);
	printf("* 비만도 계산결과: ");
	if (obesity < 80)
		printf("심한 수척");
	else if (obesity >= 80 && obesity < 90)
		printf("수척");
	else if (obesity >= 90 && obesity < 110)
		printf("정상");
	else if (obesity >= 110 && obesity < 120)
		printf("과체중");
	else if (obesity >= 120 && obesity < 130)
		printf("비만(경도)");
	else if (obesity >= 130 && obesity < 150)
		printf("비만(중증도)");
	else
		printf("비만(고도)");
	
	printf("\n");

	//getch();
	system("pause > null");

	return 0;
}