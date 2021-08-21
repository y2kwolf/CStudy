/*
 RSA 암호화
 인수분해 
 에라토스테네스의 체 
소수는 암호학에서 중요한 구실을 하는데, 
어떤 수를 소수의 곱으로 나타내는 소인수분해를 하는데 긴 시간이 걸린다는 
성질을 이용하여 만들어진 시스템이 RSA 암호다. 
소수를 찾기 어려운 만큼 암호를 풀기 어렵기 때문에 더 큰 소수를 찾는 
노력은 계속될 것이다.
*/

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
		for(j=1; j<=i; j++)
		{
			if (i%j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d ", i);
		}
		count = 0;
	}
	
	return 0;
}
