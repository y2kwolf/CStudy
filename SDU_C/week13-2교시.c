#include <stdio.h>


//void sum_it(int money);
//
//int main(void)
//{
//	int i;
//	for(i=0; i<5; i++)
//		sum_it(i);
//	
//	return 0;
//}
//
//void sum_it(int money)
//{
//	static int sum = 0;		// �������� �ʱ�ȭ 
//	sum += money;
//	printf("������ �հ�� %d�Դϴ�. \n", sum);
//}




void send(int i); // �Լ�����
int main(void)
{
	int	i;
	for(i=0; i<5; i++) 	//5 ȸ �ݺ�
		send(i);
	return 0;
}
void send(int i)
{
	static int inited = 0; // ���� ���� ���� �� �ʱ�ȭ
	if (inited == 0)
	{
		printf("��Ʈ��ũ �ʱ�ȭ�� �Ǿ����ϴ�. \n");
		inited = 1;
	}
	printf("%d �� ���½��ϴ�. \n", i);
}





