/* 
파일명: 
설명: 정수, 실수, 문자형  이해하기
작성자: 진상영

내용:
실수자료형: float(32bit) <= double(64bit) <= long double(64bit) 
 

*/

#include <stdio.h>

int main(void)
{
//	float x = 1.234567890123456789;  //4byte
//	double y = 1.234567890123456789; //8byte
//	printf("float 의 크기 = %d \n", sizeof(float));
//	printf("double 의 크기 = %d \n", sizeof(double));
//	printf("x = %.25f \n", x);
//	printf("y = %.25f \n", y);



//	int month, day, year; //날짜 변수
//	int ticket; //티켓값 변수
//	float discount; //할인율 변수
//	
//	printf("오늘의 날짜를 입력하시오 (YYYY.DD.YY 형식으로): ");
//	scanf("%d.%d.%d", &year, &month, &day);
//	printf("요즘 영화 한편 보려면 얼마나 하나요? ");
//	scanf("%d", &ticket);
//	printf("멤버쉽 카드가 있으면 몇 퍼센트나 할인되나요? ");
//	scanf("%f", &discount);
//	
//	printf("\n%d년 %d월 %d일 저녁에 \n", year, month, day);
//	printf("%d원으로 영화 한편 보면 어때요? \n", ticket);
//	printf("%.2f%%나 할인 받을 수 있는데요! \n", discount);



	char initial; //첫 글자 변수
	char grade;   //학점 변수
	
	printf("영어 이름 첫 글자는 무엇인가요?: ");
	scanf(" %c", &initial);
	
	printf("프로그래밍 과목 학점을 물어보아도 되나요?(A부터 F): ");
	scanf(" %c", &grade);
	
	printf("\n");
	printf("%c군의 프로그래밍 과목 성적은 %c입니다.", initial, grade);

	return 0;
}
