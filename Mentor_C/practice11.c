#include <stdio.h>

int main(void)
{
	//int myArr[5] = { 10, 20 , 30 , 40, 50 };
	//int* ptr = &myArr[0];
	//int i;
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", *(ptr + i));
	//}
	//printf("\n");



	//int arr[8] = { 1, 2, 3, 4, 5 ,6 , 7 ,8 };
	//int* ptr = &arr[7];
	//int i, sum = 0;
	//for (i = 0; i <= 7; i++)
	//{
	//	if (*(ptr - i)%2 != 0)
	//	{
	//		sum += *(ptr - i);
	//	}
	//}
	//for (i = 7; i >= 0; i--)
	//{
	//	if (*(ptr - i) % 2)
	//	{
	//		sum += *(ptr - i);
	//	}
	//}
	//printf("배열 요소 중 홀수의 총합은: %d\n", sum);



	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[7];
	int i;
	for (i = 7; i >= 0 ; i--) 
	{
		printf("%d ", arr[i]);
	}


	return 0;
}