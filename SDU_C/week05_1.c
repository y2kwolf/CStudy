/* 
���ϸ�: 
����: �ڷ��� �����ϱ�
�ۼ���: ����

����:

signed ������: 		short (-32768~32767)
					int(-2,147,483,648~2,147,483,647)
			   		long (-2,147,483,648~2,147,483,647)
unsigned ������:  	short (0~65535)
					int(0~4,294,967,295)
					long (0~4,294,967,295)
signed ������:		char (-128~127)
unsigned ������: 	char (0~255)

�ε��Ҽ�����: 		float (1.2E-38~3.4E38)
					double (2.2E-308~1.8E308) 
*/

#include <stdio.h>

int main(void)
{
//	short year = 10; 			// �� 3 �� 2 õ�� ���� �ʵ��� ����
//	int	sale = 200000000; 		// �� 21 ���� ���� �ʵ��� ����
//	long total_sale = 0;
//	total_sale = year * sale; 	// �����ϸ� ���� ������ ������ ����Ѵ� .
//	
//	printf("year �� %d \n", year);
//	printf("sale �� %d \n",sale);
//	printf("total sale �� %d \n", total_sale);

//	printf("%d \n", sizeof(short));	//sizeof()�Լ��� �ڷ����� ũ�⸦ ����Ʈ ������ ���  
//	printf("%d \n", sizeof(int));
//	printf("%d \n", sizeof(long));
//	printf("%d \n", sizeof(long long));

	short value; 					//short�� -32768 ~ 32768 ����
	value = 32800;
	printf("�����ʹ� %d \n", value); // overflow
	unsigned short x;  				//unsigned �����Ͽ� 0 ~ 65535 ����
	x = 32800;
	printf("�����ʹ� %u \n", x);

	return 0;
}
