/* 
파일명: 
설명: 자료형 이해하기
작성자: 진상영

내용:

signed 정수형: 		short (-32768~32767)
					int(-2,147,483,648~2,147,483,647)
			   		long (-2,147,483,648~2,147,483,647)
unsigned 정수형:  	short (0~65535)
					int(0~4,294,967,295)
					long (0~4,294,967,295)
signed 문자형:		char (-128~127)
unsigned 문자형: 	char (0~255)

부동소수점형: 		float (1.2E-38~3.4E38)
					double (2.2E-308~1.8E308) 
*/

#include <stdio.h>

int main(void)
{
//	short year = 10; 			// 약 3 만 2 천을 넘지 않도록 주의
//	int	sale = 200000000; 		// 약 21 억을 넘지 않도록 주의
//	long total_sale = 0;
//	total_sale = year * sale; 	// 웬만하면 넘지 않으니 마음껏 사용한다 .
//	
//	printf("year 는 %d \n", year);
//	printf("sale 은 %d \n",sale);
//	printf("total sale 은 %d \n", total_sale);

//	printf("%d \n", sizeof(short));	//sizeof()함수는 자료형의 크기를 바이트 단위로 계산  
//	printf("%d \n", sizeof(int));
//	printf("%d \n", sizeof(long));
//	printf("%d \n", sizeof(long long));

	short value; 					//short는 -32768 ~ 32768 까지
	value = 32800;
	printf("데이터는 %d \n", value); // overflow
	unsigned short x;  				//unsigned 적용하여 0 ~ 65535 까지
	x = 32800;
	printf("데이터는 %u \n", x);

	return 0;
}
