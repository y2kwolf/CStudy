#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//void disp_car(int car_number, int distance); // �Լ����� 
//
//int main(void)
//{
//	int i;
//	int car1_dist = 0, car2_dist = 0;  // �Ÿ� �ʱ�ȭ 
//	
//	srand((unsigned)time(NULL));  // seed �߻�
//	
//	for(i=0; i<5; i++) 
//	{
//		car1_dist += rand() % 100;  // �ڵ��� ���� �Ÿ��� ������ ����
//		car2_dist += rand() % 100;
//		disp_car(1, car1_dist); // ����Ÿ� ǥ�� �Լ� ȣ��
//		disp_car(2, car2_dist);
//		printf("-------------------------- \n");
//		getch(); // ����� Ű�Է��� ��ٸ��� �Լ� 
//	}
//	
//	return 0; 
//}
//
//void disp_car(int car_number, int distance)
//{
//	int i;
//	
//	printf("CAR #%d:", car_number);
//	for(i=0; i<distance/10; i++)  // ����ǥ�� �ݺ� 
//	{
//		printf("*");  // ����ǥ�� 
//	}
//	printf("\n");
//}




//#define SUCCESS 1  // ��ȣ��� ����
//#define FAIL 2
//#define LIMIT 3
//int check(int id, int password); // �Լ� ����
//int main(void) 
//{
//	int id, password, result;
//	
//	while(1)
//	{
//		printf("id(4�ڸ�����):");
//		scanf("%d", &id);
//		printf("pass(4�ڸ�����):");
//		scanf("%d", &password);
//		result = check(id, password);
//		if(result == SUCCESS) break;
//	}
//	printf("�α��� ���� \n");
//	return 0;	
//}
//
//int check(int id, int password)
//{
//	static int super_id = 1234;
//	static int super_password = 5678;
//	static int try_count = 0;
//	
//	try_count++;
//	if(try_count > LIMIT)
//	{
//		printf("Ƚ�� �ʰ� \n");
//		exit(1);  // ���α׷� ����
//	}
//	if(id == super_id && password == super_password) 
//		return SUCCESS;
//	else
//		return FAIL;
//}


// ����  y = log2x + e x
// C��� ǥ��  y = log2(x) + exp(x);

int main (void)
{
	int	x = 4 , y;
	y = log2(x) + exp(x);
	printf("y= %d", y);
}


















