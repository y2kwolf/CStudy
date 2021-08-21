#include <stdio.h>

int main(void)
{
	
	char study[] = "C 언어를 배우고 있습니다.";    // 문자열 배열 초기화 
	printf("%s \n", study);  	// 문자열 배열 출력 
	
	char word[100], i;
	printf("영문 단어를 하나 입력하시오: ");	
	scanf(" %s", &word);
	
	i = 0;
	while(word[i] != '\0')	// null 문자인지 검사 
		i++;   // null 문자가 아니면 증가 
		
	printf("문자열의 길이: %d", i);
	
	return 0;
}  
