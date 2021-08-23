/*
파일명: section13.c
작성자: 진상영
작성일: 2021-07-31
내용: 문자열과 함수
1) 문자열과 포인터
- 배열기반의 문자열: 변수 형태의 문자열
- 포인터기반의 문자열: 상수 형태의 문자열
2) 문자열 관련 함수
- getchar(), gets() 문자열 입력함수
- putchar(), puts() 문자열 출력함수, 
*/

#include <stdio.h>
#include <string.h> // 문자열처리 표준함수 헤더

int main(void)
{
	//char good[] = "Good!";	// 배열기반 문자열
	//char* bad = "Bad!";		// 포인터기반 문자열
	//printf("%s %s\n", good, bad);

	//good[0] = 'H';
	//// bad[0] = 'H';	// 개별 요소값 할당 불가능
	//printf("%s %s\n", good, bad);

	//// good = "New Good";	// 새로운 주소값 할당 불가능
	//bad = "New Bad";	
	//printf("%s %s\n", good, bad);



	//int ch1, ch2;
	//ch1 = getchar();
	//ch2 = getchar();
	//putchar(ch1); putchar(ch2);



	//int ch;
	//while (1)
	//{
	//	ch = getchar();
	//	if (ch == EOF)  // ctrl+z 입력 EOF반환
	//		break;
	//	putchar(ch);
	//}



	//char ch[30];
	//gets(ch);
	//puts(ch);
	//printf("이 문자열은 다음 줄에서 출력됩니다.\n");
	


	//char str1[50] = "apple is good";
	//char str2[50] = "berry is good";
	//char str3[50];
	//// 각 문자열의 길이 출력
	//printf("str1의 길이: %d, str2의 길이: %d\n", strlen(str1), strlen(str2));
	//// str1의 내용 전체를 str3에 복사하기
	//strcpy(str3, str1);
	//// str1의 내용 중 다섯 글자를 str2에 복사하기
	//strncpy(str2, str1, 5);
	//printf("%s\n%s\n%s\n", str1, str2, str3);



	char str1[50] = "Michael ";
	char str2[50] = "Michael ";
	// str1에 문자열 붙이기
	strcat(str1, "Bolton");
	printf("%s\n", str1);
	// str2에 7개의 문자 붙이기
	strncat(str2, "Jackson Five", 7);
	printf("%s\n", str2);
	// str1과 str2 비교
	printf("비교결과: %d\n", strcmp(str1, str2));
	// str1과 str2 앞의 7개 문자만 비교
	printf("비교결과: %d\n", strncmp(str1, str2, 7));





	return 0;
}