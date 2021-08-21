#include <stdio.h>

//int get_min(int , int); 	// 함수선언
//
//int main(void)
//{
//	int	n1, n2, result;
//	int	(*pf)(int, int); 	// 함수 포인터선언
//	
//	printf("2개의 숫자를 입력하시오<예:5 3>: ");
//	scanf("%d %d", &n1, &n2);
//	
//	pf = get_min;  			// get_min 함수의 시작주소를 pf 변수에 저장
//	result = pf(n1, n2);	// 함수 주소를 이용하여 함수를 호출
//	printf("더 작은 값은 %d 입니다. \n", result);
//	return 0;
//}
//int get_min(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}



//int main(void)
//{
//	char str[] = "hello";
//	printf("%s \n", str);
//	char *p = "world";
//	printf("%s \n", p);
//	//	str[]= 헬로
//	// 	printf ("%s n", str);
//	p = "월드"; 
//	printf("%s \n", p);
//	return 0;
//}




//int main( void )
//{
//	int	i;
//	char menu[5][10] = {  
//	"김밥",
//	"라면",
//	"떡볶이",
//	"만두",
//	"냉면"
//	};
//	for(i=0; i<5; i++)
//	printf("%d 번째 메뉴: %s \n", i+1, menu[i]);
//	// 배열 행 첫 번째 부터 출력
//	return 0;
//}




//int main(void)
//{
//	char *p[3] = {"January", "February", "March"};
//	int	i;
//	for(i=0; i<3; i++)
//		printf("%d월은 %s 입니다 \n", i+1, p[i]);
//	return 0;
//}




#include <string.h> // 문자열의 문자 개수를 계산하는 함수
int main(void)
{
	int i;
	int upper, lower, digit; // 조건판단 flag 변수
	char pass[30];
	
	while (1)
	{
		printf("암호를 생성하시오:");
		scanf(" %s", pass); // 문자열 저장
		
		upper = lower = digit = 0;  //flag 초기화
		
		for (i=0; i<strlen(pass); i++) // 문자개수만큼 반복
		{
			if (pass[i] >= '0' && pass[i] <= '9') // 숫자?
				digit = 1;
			else if (pass[i] >= 'A' && pass[i] <= 'Z') // 대문자?
				upper = 1;
			else if (pass[i] >= 'a' && pass[i] <= 'z') // 소문자?
				lower = 1;
		}
		
		if ((digit == 1) && (upper == 1) && (lower == 1))
		{
			printf("적정한 암호입니다. \n");
			printf("digit=%d, upper=%d, lower=%d", digit, upper, lower);
			break;
		}
		else
			printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요! \n");
	}
	return(0);
}


