#include <stdio.h>

int main(void)
{
	int i, num;
	int j = 1;
	int count = 0;
	
	printf("<�Է��� ������ ������ �Ҽ� ��� ���α׷�>\n\n");
	printf("2�̻��� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num) ;
	
	for (i=2; i<=num; i++)
	{
		for(j=2; j<i; j++)
		{
			if (i%j == 0)
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
		{
			printf("%d ", i);
		}
		count = 0;
	}
	
	return 0;
}

// RSA ��ȣȭ
// �μ����� 
// �����佺�׳׽��� ü 
