#include <stdio.h>

int main(void)
{
	//char bingo[3][3];
	//int i, j; // �ݺ����� ���� ����
	//// �� ��ҿ� ���ʴ�� �����Ͽ� �ʱ�ȭ�ϱ�
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (i == j)
	//			bingo[i][j] = 'O';
	//		else
	//			bingo[i][j] = 'X';
	//	}		
	//}
	//// �� ��� ����ϱ�
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%-3c", bingo[i][j]);
	//	}
	//	printf("\n");
	//}



	//int gugu[4][9];
	//int i, j;
	//// �� ��ҿ� ���ʴ�� �����Ͽ� �ʱ�ȭ�ϱ�
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 9; j++)
	//	{
	//		gugu[i][j] = (i+2)*(j+1);
	//	}
	//}
	//// �� ��� ����ϱ�
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 9; j++)
	//	{
	//		printf("%-4d", gugu[i][j]);
	//	}
	//	printf("\n");
	//}



	int arr[3][2] = { {6,7},{8,9},{3,4} };
	printf("%d %d \n", arr[1][0], arr[0][1]);			// 8 7
	printf("%d %d \n", *(arr[2]+1), *(arr[1]+1));		// 4 9 
	printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);	// 3 7
	printf("%d %d \n", **arr, *(*(arr+0)+0));			// 6 6

	return 0;
}