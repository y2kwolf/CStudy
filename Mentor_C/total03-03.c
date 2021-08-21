#include <stdio.h>

int main(void)
{
	int num, backupNum;
	int count = 0, i, j;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	backupNum = num; // 초기입력값 백업

	// 입력된 정수의 자리수값 계산
	while (num != 0)
	{
		num /= 10;
		++count;
	}
	printf("\n자리수: %d\n", count);

	num = backupNum; // 초기 입력값 복원
	for (i = count; i > 0; i--)
	{
		int innerDigits = 1;
		for (j = 1; j < i; j++)
			innerDigits *= 10;

		for (j = i; j > 0; j--)
		{
			printf("%d ", num / innerDigits);
			num -= ((num / innerDigits) * innerDigits);
			if (j == i) backupNum = num;
			innerDigits /= 10;
		}
		num = backupNum;
		printf("\n");
	}

	return 0;
}