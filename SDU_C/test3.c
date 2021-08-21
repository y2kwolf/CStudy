#include <stdio.h>

int main(void)
{
	int i, num;
	int j = 1;
	int count = 0;
	
	printf("<입력한 정수값 이하의 소수 출력 프로그램>\n\n");
	printf("2이상의 정수를 입력하시오: ");
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

// RSA 암호화
// 인수분해 
// 에라토스테네스의 체 
