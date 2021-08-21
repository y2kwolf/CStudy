#include <stdio.h>
#include <stdlib.h> // 표준 라이이브러리함수 포함 
#include <time.h> 	// 시간함수포함 

#define MAX 45 		// 기호상수로 최대값 선언 
 
//int main(void)
//{
//	int i;
//	srand((unsigned)time(NULL)); // seed 발생 
//	
//	for(i=0; i < 6; i++)
//	{		
//		printf("%d ", 1 + (rand()%MAX));
//	}
//	
//	return 0;
//}



// 동전던지기 
//int coin_toss(void);  // 함수선언, 동전던지기 
//
//
//int main(void)
//{
//	int toss;
//	int heads = 0;
//	int tails = 0;
//	srand((unsigned)time(NULL));
//	
//	for(toss=0; toss<100; toss++)
//	{
//		if(coin_toss() == 1)
//			heads++;
//		else
//			tails++;
//	}
//	
//	printf("동전의 앞면: %d \n", heads);
//	printf("동전의 뒷면: %d \n", tails);
//	return 0;
//}
//
//int coin_toss(void)
//{
//	int i = rand() % 2;
//	if(i == 0)
//		return 0;
//	else
//		return 1;
//}




int main(void) 
{
	printf("%f \n", fabs(-1.72));
	printf("%f \n", floor(1.72));
	printf("%f \n", ceil(1.72));
	printf("%d \n", rand()%10);
	printf("%d \n", rand()%5+2);
}





