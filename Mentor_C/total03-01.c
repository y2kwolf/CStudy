#include <stdio.h>

int main(void)
{
	//int arr[5];
	//int i;
	//int max, min;
	//int sum = 0;
	//printf("NUM1 : ");
	//scanf("%d", &arr[0]);
	//printf("NUM2 : ");
	//scanf("%d", &arr[1]);
	//printf("NUM3 : ");
	//scanf("%d", &arr[2]);
	//printf("NUM4 : ");
	//scanf("%d", &arr[3]);
	//printf("NUM5 : ");
	//scanf("%d", &arr[4]);
	//printf("\n");
	//max = arr[0];
	//min = arr[0];
	//// �ִ밪 ���
	//for (i = 0; i < 5; i++)
	//{
	//	if (max < arr[i])
	//		max = arr[i];
	//}
	//printf("�ִ밪 : %d\n", max);
	//// �ּҰ� ���
	//for (i = 0; i < 5; i++)
	//{
	//	if (min > arr[i])
	//		min = arr[i];
	//}
	//printf("�ּҰ� : %d\n", min);
	//// ���հ� ���
	//for (i = 0; i < 5; i++)
	//{
	//sum += arr[i];
	//}
	//printf("���հ� : %d\n", sum);



	// ���

	int arr[5];
	int i, min, max, total = 0;

	for (i = 0; i < 5; i++)
	{
		printf("NUM%d : ", i + 1);
		scanf("%d", &arr[i]);

		if (i == 0)
		{
			max = arr[i];
			min = arr[i];
		}
		else
		{
			if (arr[i] > max) max = arr[i];
			if (arr[i] < min) min = arr[i];
		}

		total += arr[i];
	}

	printf("\n�ִ밪: %d\n�ּҰ�: %d\n���հ�: %d\n", max, min, total);

	return 0;
}