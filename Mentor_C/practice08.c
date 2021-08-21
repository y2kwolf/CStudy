#include <stdio.h>

int main(void)
{
	int num, a;
	int sum = 0;
	printf("1이상의 정수를 입력하세요: ");
	scanf_s("%d", &num);
	for (a = 1; a <= num; a++)
	{
		sum += a;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);


	//int num;
	//int a = 1;
	//int sum = 0;
	//printf("1이상의 정수를 입력하세요: ");
	//scanf_s("%d", &num);
	//while (a <= num)
	//{
	//	sum += a;
	//	a++;
	//}
	//printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);


	//int num;
	//for (num = 1; num <= 100; num++)
	//{
	//	if (num % 6 == 0)
	//	{
	//		printf("%d ", num);
	//	}
	//}


	//char alpha;

	//while(1)
	//{
	//	printf("입력하세요: ");
	//	scanf_s(" %c", &alpha);
	//	
	//	if (alpha >= 'A' && alpha <= 'Z')
	//	{
	//		printf("%c 입력했습니다. 종료합니다.\n", alpha);
	//			break;
	//	}
	//	else
	//	{
	//		printf("%c 입력했습니다.\n", alpha);
	//	}
	//}

	return 0;
}