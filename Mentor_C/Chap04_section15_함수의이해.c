/*
파일명: section15.c
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

3) 변수의 생명주기
- 지역 변수
- 전역 변수
- static 변수 (static 키워드 사용)

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

/*
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
*/

/*
// 입력값과 반환값 모두 있는 경우
// 정수형 데이터 두 개를 전달받아 정수형 데이터 반환
int getBigger(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	else if (n1 < n2)
		return n2;
	else
		return 0;
}

int main(void)
{
	int result;

	result = getBigger(3, 5);
	printf("첫 번째 결과: %d\n", result);

	result = getBigger(8, 2);
	printf("두 번째 결과: %d\n", result);

	result = getBigger(4, 4);
	printf("세 번째 결과: %d\n", result);

	return 0;
}
*/

/*
// 입력값만 존재하는 경우
void printNumber(int num)
{
	printf("당신이 입력한 정수는 %d입니다.\n", num);
}

int main(void)
{
	printNumber(3);
}
*/

/*
// 반환값만 존재하는 경우
int inputNumber(void)
{
	int num;
	printf("정수를 입력해 주세요: ");
	scanf("%d", &num);

	return num;
}
int main(void)
{
	int result;
	result = inputNumber();
	printf("%d", result);
}
*/

void increaseNumber()
{
	static int number = 0; // 정적변수 선언
	number++;
	printf("number: %d\n", number);
}

int main(void)
{
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	
	return 0;
}



