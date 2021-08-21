/*
���ϸ�: section02.c
�ۼ���: ����
�ۼ���: 2021-06-17
����: ������ �ڷ���
1) ����
2) printf() �Լ� ���� ���
3) �ڷ���: ����(����)- char / ����- short, int, long, long long / �Ǽ�- float, double, long double
4) ���: ���ͷ� / �ɺ��� / ��ũ�� ���
5) �ڷ�����ȯ: �ڵ�����ȯ / ���������ȯ
*/

#include <stdio.h> // ǥ�� �Լ� ����� ���� ��� ���� ����
#define LENGTH 10 // ��ũ�� ��� ���ǿ��� �����ݷ�(;)�� ������� �ʴ´�.

int main(void)
{
	// ���ڿ� ���
	printf("Hello C!\n"); // Hello C!�� ����մϴ�.
	printf("\n");
	
	// ������ �ڷ���
	int num1 = 3;
	printf("%d\n", num1); //���������ڸ� �̿��� ���� ���
	int num2 = 5;
	printf("%d\n", num2);
	printf("������(int)�� ũ�� = %dbyte\n", sizeof(10));
	printf("�Ǽ���(float)�� ũ�� = %dbyte\n", sizeof(3.14));
	printf("\n");

	// ���ڿ�
	printf("%c\n", 66);
	printf("%c\n", 'B');
	printf("%c\n", 67);
	printf("%c\n", 68);
	printf("\n");

	// ���
	const int NUMBER = 5; //�ɺ��� ��� ����
	printf("%d\n", LENGTH);
	printf("%d\n", NUMBER);
	printf("\n");

	// �ڵ�����ȯ
	double number1 = 10; // 10.0���� ��ȯ
	int number2 = 3.14159;
	short number3 = 70000;
	printf("%f\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
	printf("\n");

	// ���������ȯ
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (float)10);
	printf("%f\n", (double)10);
	printf("\n");

	printf("������ ����: ������ �ڷ���\n");
	printf("���α׷� �ۼ���: ȫ�浿\n");
	printf("���α׷� �ۼ���: 2021.02.23\n");

	return 0;
}