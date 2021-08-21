#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//void disp_car(int car_number, int distance); // 함수정의 
//
//int main(void)
//{
//	int i;
//	int car1_dist = 0, car2_dist = 0;  // 거리 초기화 
//	
//	srand((unsigned)time(NULL));  // seed 발생
//	
//	for(i=0; i<5; i++) 
//	{
//		car1_dist += rand() % 100;  // 자동차 주행 거리를 난수로 결정
//		car2_dist += rand() % 100;
//		disp_car(1, car1_dist); // 진행거리 표시 함수 호출
//		disp_car(2, car2_dist);
//		printf("-------------------------- \n");
//		getch(); // 사용자 키입력을 기다리는 함수 
//	}
//	
//	return 0; 
//}
//
//void disp_car(int car_number, int distance)
//{
//	int i;
//	
//	printf("CAR #%d:", car_number);
//	for(i=0; i<distance/10; i++)  // 주행표시 반복 
//	{
//		printf("*");  // 주행표시 
//	}
//	printf("\n");
//}




//#define SUCCESS 1  // 기호상수 선언
//#define FAIL 2
//#define LIMIT 3
//int check(int id, int password); // 함수 정의
//int main(void) 
//{
//	int id, password, result;
//	
//	while(1)
//	{
//		printf("id(4자리숫자):");
//		scanf("%d", &id);
//		printf("pass(4자리숫자):");
//		scanf("%d", &password);
//		result = check(id, password);
//		if(result == SUCCESS) break;
//	}
//	printf("로그인 성공 \n");
//	return 0;	
//}
//
//int check(int id, int password)
//{
//	static int super_id = 1234;
//	static int super_password = 5678;
//	static int try_count = 0;
//	
//	try_count++;
//	if(try_count > LIMIT)
//	{
//		printf("횟수 초과 \n");
//		exit(1);  // 프로그램 종료
//	}
//	if(id == super_id && password == super_password) 
//		return SUCCESS;
//	else
//		return FAIL;
//}


// 수식  y = log2x + e x
// C언어 표현  y = log2(x) + exp(x);

int main (void)
{
	int	x = 4 , y;
	y = log2(x) + exp(x);
	printf("y= %d", y);
}


















