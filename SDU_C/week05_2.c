/* 
���ϸ�: 
����: ����, �Ǽ�, ������  �����ϱ�
�ۼ���: ����

����:
�Ǽ��ڷ���: float(32bit) <= double(64bit) <= long double(64bit) 
 

*/

#include <stdio.h>

int main(void)
{
//	float x = 1.234567890123456789;  //4byte
//	double y = 1.234567890123456789; //8byte
//	printf("float �� ũ�� = %d \n", sizeof(float));
//	printf("double �� ũ�� = %d \n", sizeof(double));
//	printf("x = %.25f \n", x);
//	printf("y = %.25f \n", y);



//	int month, day, year; //��¥ ����
//	int ticket; //Ƽ�ϰ� ����
//	float discount; //������ ����
//	
//	printf("������ ��¥�� �Է��Ͻÿ� (YYYY.DD.YY ��������): ");
//	scanf("%d.%d.%d", &year, &month, &day);
//	printf("���� ��ȭ ���� ������ �󸶳� �ϳ���? ");
//	scanf("%d", &ticket);
//	printf("����� ī�尡 ������ �� �ۼ�Ʈ�� ���εǳ���? ");
//	scanf("%f", &discount);
//	
//	printf("\n%d�� %d�� %d�� ���ῡ \n", year, month, day);
//	printf("%d������ ��ȭ ���� ���� ���? \n", ticket);
//	printf("%.2f%%�� ���� ���� �� �ִµ���! \n", discount);



	char initial; //ù ���� ����
	char grade;   //���� ����
	
	printf("���� �̸� ù ���ڴ� �����ΰ���?: ");
	scanf(" %c", &initial);
	
	printf("���α׷��� ���� ������ ����Ƶ� �ǳ���?(A���� F): ");
	scanf(" %c", &grade);
	
	printf("\n");
	printf("%c���� ���α׷��� ���� ������ %c�Դϴ�.", initial, grade);

	return 0;
}
