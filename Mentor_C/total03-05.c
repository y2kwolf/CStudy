/*

1. 달력프로그램
2. 조건
1) 1년 1월 1일은 월요일
2) 4년마다 윤년
3) 100년마다 윤년 아님
4) 400년마다 윤년

*/

#include <stdio.h>


// 윤년판단 함수
int is_leaf_year(int yyyy)
{
	if ((yyyy % 400 == 0) || (yyyy % 100 != 0) && (yyyy % 4 == 0))
		return 1;
	return 0;
}

// 월별 일수 계산 함수
int get_day_of_month(int yyyy, int mm)
{
	int day_of_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	day_of_month[2] += is_leaf_year(yyyy);
	return day_of_month[mm];
}

// 특정 년월 1일의 요일 구하기 함수
int get_day(int yyyy, int mm)
{
	int past = 0;
	for (int y = 1; y < yyyy; y++)
		past = past + 365 + is_leaf_year(y);
	for (int m = 1; m < mm; m++)
		past = past + get_day_of_month(yyyy, m);
	return (1 + past) % 7;
}

// 결과 출력 함수
void print_cal(int start_day, int day_num)
{

	printf(" ===================================================\n");
	printf(" Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\n");
	printf(" ===================================================\n");
	for (int i = 0; i < start_day; i++)
		printf("\t");
	for (int day = 1, ke = start_day; day <= day_num; day++, ke++)
	{
		printf(" %3d\t", day);
		if (ke % 7 == 6)
			printf("\n");
	}
	printf("\n");
	printf("\n");
}

// 메인 함수
int main(void)
{
	int yyyy, mm;
	//printf(" 출력년도: ");
	//scanf("%d", &yyyy);
	//printf(" 출력월: ");
	//scanf("%d", &mm);

	while (1)
	{
		printf("■ 년,월을 입력하세요! (예시)2021 7, <종료는 0>: ");
		scanf("%d", &yyyy);		
		if (yyyy == 0)
			break;		
		scanf("%d", &mm);
		if (mm < 0 || mm >12)
		{
			printf("\n잘못된 월을 입력하셨습니다!\n");
			printf("\n");
			continue;
		}
		
		printf("\n");
		printf("                     %d년 %d월\n", yyyy, mm);

		int start_day = get_day(yyyy, mm);
		int day_num = get_day_of_month(yyyy, mm);
		print_cal(start_day, day_num);
	}
}

