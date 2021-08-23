/*
파일명: section04.c
작성자: 진상영
작성일: 2021-06-17
내용: 기본 입출력 함수
1) printf 출력함수
- 제어문자(특수문자, Escape Sequence)
- 형식문자
- 출력형태 결정
2) scanf 입력함수
- 솔루션탐색기 > 속성 > C/C++ > 전처리기 > 전처리기 정의 > _CRT_SECURE_NO_WARNINGS 추가
- #define _CRT_SECURE_NO_WARNINGS 추가
*/

#include <stdio.h>

int main(void)
{
	/*
		제어문자의 \기호는
		글꼴에 따라 \기호로 대체 가능
	*/

	printf("\"I am a boy.\"\n");
	printf("I am a \'boy\'.\n");
	printf("I\tam\ta\tboy.\n");
	printf("I\bam a boy.\n");
	printf("I am a boy\\\?\n");

	printf("\n");

	char character = 'x';
	int inumber = 92;
	double dnumber = 20.201005;
	printf("%c\n", character); // 값에 대응하는 문자
	printf("%d\n", character); // 부호 있는 10진수 정수
	printf("%d\n", inumber);
	printf("%x\n", inumber); // 부호없는(unsigned) 16진수 정수
	printf("%o\n", inumber); // 부호없는(unsigned) 8진수 정수
	printf("%f\n", dnumber); // 10진수 방식의 부동소수점 실수
	printf("%e\n", dnumber); // 지수 방식의 부동소수점 실수

	printf("\n");

	character = 'H';
	int num = 548;
	float fnum = 1.1234567;
	printf("%5c\n", character);
	printf("%-5c\n", character);
	printf("%10d\n", num);
	printf("%-10d\n", num);	
	printf("%10f\n", fnum);
	printf("%-10f\n", fnum);
	printf("%10.3f\n", fnum);
	printf("%-10.3f\n", fnum);

	printf("\n");

	//scanf_s("%c", &character);
	//scanf_s("%d", &num);
	//scanf_s("%f", &fnum);
	//printf("%c %d %f \n", character, num, fnum);

	printf("\n");

	int num1, num2, num3;
	float fnum1, fnum2;

	printf("세 개의 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("입력된 정수들: %d %d %d \n", num1, num2, num3);

	printf("실수, 정수, 실수 차례대로 입력: ");
	scanf_s("%f %d %f", &fnum1, &num1, &fnum2);
	printf("입력된 값들: %0.2f %d %0.2f \n", fnum1, num1, fnum2);

	return 0;
}