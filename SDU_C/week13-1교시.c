#include <stdio.h>
#include <stdlib.h> // ǥ�� �����̺귯���Լ� ���� 
#include <time.h> 	// �ð��Լ����� 

#define MAX 45 		// ��ȣ����� �ִ밪 ���� 
 
//int main(void)
//{
//	int i;
//	srand((unsigned)time(NULL)); // seed �߻� 
//	
//	for(i=0; i < 6; i++)
//	{		
//		printf("%d ", 1 + (rand()%MAX));
//	}
//	
//	return 0;
//}



// ���������� 
//int coin_toss(void);  // �Լ�����, ���������� 
//
//
//int main(void)
//{
//	int toss;
//	int heads = 0;
//	int tails = 0;
//	srand((unsigned)time(NULL));
//	
//	for(toss=0; toss<100; toss++)
//	{
//		if(coin_toss() == 1)
//			heads++;
//		else
//			tails++;
//	}
//	
//	printf("������ �ո�: %d \n", heads);
//	printf("������ �޸�: %d \n", tails);
//	return 0;
//}
//
//int coin_toss(void)
//{
//	int i = rand() % 2;
//	if(i == 0)
//		return 0;
//	else
//		return 1;
//}




int main(void) 
{
	printf("%f \n", fabs(-1.72));
	printf("%f \n", floor(1.72));
	printf("%f \n", ceil(1.72));
	printf("%d \n", rand()%10);
	printf("%d \n", rand()%5+2);
}





