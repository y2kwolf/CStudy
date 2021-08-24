/*
���ϸ�: section05.c
�ۼ���: ����
�ۼ���: 2021-06-18
����: �⺻������
1) ���������: +, -, *, /, %
2) ��ȣ������: +, -  -> �ǿ����ڰ� �ϳ��� ���
3) ���Կ�����: =, +=, -=, *=, /=, %=
4) ����/�񱳿�����: <, >, ==, !=, <=, >=
5) ����������: ++, --
6) ������ �켱����
*/

#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 3;

	// ���������
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	printf("\n");

	// ���Կ�����
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num1 += 3�� ���:%d\n", num1 += 3);
	printf("num2 -= 3�� ���:%d\n", num2 -= 3);

	printf("\n");

	// �񱳿�����
	int a = 10, b = 11;
	printf("a = %d\n", a);
	printf("n = %d\n", b);
	printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);

	printf("\n");

	// ����������
	int x = 10, y = 10;
	printf("x : %d\n", x);
	printf("x : %d\n", ++x); // ���� �� ���(���� Prefix)
	printf("x : %d\n", x);

	printf("y : %d\n", y);
	printf("y : %d\n", y++); // ��� �� ����(���� Postfix)
	printf("y : %d\n", y);	

	// ����켱����
	int n1 = 3, n2 = 5;
	int result = n1++ + n2 * 3;
	printf("���� ��� : %d\n", result);

	return 0;
}