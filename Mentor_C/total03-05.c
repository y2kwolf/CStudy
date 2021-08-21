/*

1. �޷����α׷�
2. ����
1) 1�� 1�� 1���� ������
2) 4�⸶�� ����
3) 100�⸶�� ���� �ƴ�
4) 400�⸶�� ����

*/

#include <stdio.h>


// �����Ǵ� �Լ�
int is_leaf_year(int yyyy)
{
	if ((yyyy % 400 == 0) || (yyyy % 100 != 0) && (yyyy % 4 == 0))
		return 1;
	return 0;
}

// ���� �ϼ� ��� �Լ�
int get_day_of_month(int yyyy, int mm)
{
	int day_of_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	day_of_month[2] += is_leaf_year(yyyy);
	return day_of_month[mm];
}

// Ư�� ��� 1���� ���� ���ϱ� �Լ�
int get_day(int yyyy, int mm)
{
	int past = 0;
	for (int y = 1; y < yyyy; y++)
		past = past + 365 + is_leaf_year(y);
	for (int m = 1; m < mm; m++)
		past = past + get_day_of_month(yyyy, m);
	return (1 + past) % 7;
}

// ��� ��� �Լ�
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

// ���� �Լ�
int main(void)
{
	int yyyy, mm;
	//printf(" ��³⵵: ");
	//scanf("%d", &yyyy);
	//printf(" ��¿�: ");
	//scanf("%d", &mm);

	while (1)
	{
		printf("�� ��,���� �Է��ϼ���! (����)2021 7, <����� 0>: ");
		scanf("%d", &yyyy);		
		if (yyyy == 0)
			break;		
		scanf("%d", &mm);
		if (mm < 0 || mm >12)
		{
			printf("\n�߸��� ���� �Է��ϼ̽��ϴ�!\n");
			printf("\n");
			continue;
		}
		
		printf("\n");
		printf("                     %d�� %d��\n", yyyy, mm);

		int start_day = get_day(yyyy, mm);
		int day_num = get_day_of_month(yyyy, mm);
		print_cal(start_day, day_num);
	}
}

