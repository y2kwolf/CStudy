/*
���ϸ�: section14.c
�ۼ���: ����
�ۼ���: 2021-08-10
����: �Լ��� ����
1) �Լ��� ���ǿ� ����

*/

#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;
	result = add(3, 5);
	printf("�Լ��� ��ȯ�� ��: %d\n", result);
	
	return 0;
}