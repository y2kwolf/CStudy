/*
���ϸ�: section06.c
�ۼ���: ����
�ۼ���: 2021-06-18
����: �� �����ڿ� ��Ʈ ���� ������
1) �� ������: ���׿�����(&&, ||), ���׿�����(!)
2) ���� ���� ������: ����?���1:���2
3) ��Ʈ ���� ������: &, |, ^, ~
4) ����Ʈ ������: <<, >>
*/

#include <stdio.h>

int main(void)
{
	// �� ������
	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;
	printf("result 1 : %d\n", result);	// 1
	result = num1 == 20 && num2 == 10;
	printf("result 2 : %d\n", result);	// 1
	result = num1 > num2 && num1 == num2;
	printf("result 3 : %d\n", result);	// 0 

	printf("\n");

	// ���� ���� ������
	int num, absolute;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	absolute = num > 0 ? num : num * -1;
	printf("���밪: %d\n", absolute);

	printf("\n");

	// ��Ʈ ���� ������
	int a = 3; // 00000011 
	int b = 5; // 00000101
	printf("3 & 5 = %d\n", a & b);	// AND
	printf("3 | 5 = %d\n", a | b);	// OR
	printf("3 ^ 5 = %d\n", a ^ b);	// XOR
	printf("~3 = %d\n", ~a);		// NOT

	printf("\n");

	// ����Ʈ ������
	int x, y;
	x = 1;

	y = x << 2;
	printf("%d << 2 = %d\n", x, y);
	y = x >> 2;
	printf("%d >> 2 = %d\n", x, y);

	return 0;
}