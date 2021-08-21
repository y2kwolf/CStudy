#include <stdio.h>

int main(void)
{
	//int num = 3;
	//if (num == 2)
	//{
	//	printf("state 1\n");
	//}
	//else if (num > 2 && num < 4)
	//{
	//	printf("state 2\n");
	//}
	//else if (num == 3)
	//{
	//	printf("state 3\n");
	//}
	//else
	//{
	//	printf("state 4\n");
	//}



	//int num;
	//printf("정수를 입력하세요 : ");
	//scanf_s("%d", &num);
	////printf(num % 2 == 0 ? "입력한 정수는 짝수입니다.\n" : "입력한 정수는 홀수입니다.\n");
	//if (num % 2 == 0)
	//	printf("입력한 정수는 짝수입니다.\n");
	//else
	//	printf("입력한 정수는 홀수입니다.\n");
	


	int num;
	printf("나이를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num < 6 || num >= 65)
	{
		printf("지하철 요금은 무료입니다.\n");
	}
	else if (num >= 6 && num < 13)
	{
		printf("지하철 요금은 500원입니다.\n");
	}
	else if (num >= 13 && num < 19)
	{
		printf("지하철 요금은 900원입니다.\n");
	}
	else if (num >= 19 && num < 65)
	{
		printf("지하철 요금은 1250원입니다.\n");
	}



	//float avg = (88 + 90 + 98 + 81 + 99 + 88) / 6.0;
	//int result;
	//result = (int)avg;

	//printf("중간고사 평균점수는 %.2f이고,\n", avg);

	//if (result >= 90)
	//{
	//	printf("A학점입니다.\n");
	//}
	//else if (result >= 80 && result < 90)
	//{
	//	printf("B학점입니다.\n");
	//}
	//else if (result >= 70 && result < 80)
	//{
	//	printf("C학점입니다.\n");
	//}
	//else if (result >= 60 && result < 70)
	//{
	//	printf("D학점입니다.\n");
	//}
	//else
	//	printf("F학점입니다.\n");
		
	
	return 0;
}