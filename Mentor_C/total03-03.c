#include <stdio.h>

int main(void)
{
	int num, backupNum;
	int count = 0, i, j;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	backupNum = num; // �ʱ��Է°� ���

	// �Էµ� ������ �ڸ����� ���
	while (num != 0)
	{
		num /= 10;
		++count;
	}
	printf("\n�ڸ���: %d\n", count);

	num = backupNum; // �ʱ� �Է°� ����
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