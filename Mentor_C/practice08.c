#include <stdio.h>

int main(void)
{
	int num, a;
	int sum = 0;
	printf("1�̻��� ������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	for (a = 1; a <= num; a++)
	{
		sum += a;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", num, sum);


	//int num;
	//int a = 1;
	//int sum = 0;
	//printf("1�̻��� ������ �Է��ϼ���: ");
	//scanf_s("%d", &num);
	//while (a <= num)
	//{
	//	sum += a;
	//	a++;
	//}
	//printf("1���� %d������ ���� %d�Դϴ�.\n", num, sum);


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
	//	printf("�Է��ϼ���: ");
	//	scanf_s(" %c", &alpha);
	//	
	//	if (alpha >= 'A' && alpha <= 'Z')
	//	{
	//		printf("%c �Է��߽��ϴ�. �����մϴ�.\n", alpha);
	//			break;
	//	}
	//	else
	//	{
	//		printf("%c �Է��߽��ϴ�.\n", alpha);
	//	}
	//}

	return 0;
}