#include <stdio.h>

int main(void)
{
	int arr[8];
	int i;

	for (i = 0; i < 8; i++)
	{
		printf("NUM%d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("Ȧ��: ");
	for (i = 0; i < 8; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}
	printf("\n");
	printf("¦��: ");
	for (i = 0; i < 8; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}