#include <stdio.h>


//void sum_it(int money);
//
//int main(void)
//{
//	int i;
//	for(i=0; i<5; i++)
//		sum_it(i);
//	
//	return 0;
//}
//
//void sum_it(int money)
//{
//	static int sum = 0;		// 정적변수 초기화 
//	sum += money;
//	printf("현재의 합계는 %d입니다. \n", sum);
//}




void send(int i); // 함수정의
int main(void)
{
	int	i;
	for(i=0; i<5; i++) 	//5 회 반복
		send(i);
	return 0;
}
void send(int i)
{
	static int inited = 0; // 정적 변수 선언 및 초기화
	if (inited == 0)
	{
		printf("네트워크 초기화가 되었습니다. \n");
		inited = 1;
	}
	printf("%d 을 보냈습니다. \n", i);
}





