#include <stdio.h>

int main(void)
{
	char initial; //ù ���� ����
	char grade;   //���� ����
	
	printf("���� �̸� ù ���ڴ� �����ΰ���?: ");
	scanf("%c", &initial);
	
	printf("���α׷��� ���� ������ ����Ƶ� �ǳ���?(A���� F): ");
	scanf("%c", &grade);
	
	printf("\n");
	printf("%c���� ���α׷��� ���� ������ %c�Դϴ�.", initial, grade);

	return 0;
}
