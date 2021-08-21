/*
���ϸ�: section04.c
�ۼ���: ����
�ۼ���: 2021-06-17
����: �⺻ ����� �Լ�
1) printf ����Լ�
- �����(Ư������, Escape Sequence)
- ���Ĺ���
- ������� ����
2) scanf �Է��Լ�
- �ַ��Ž���� > �Ӽ� > C/C++ > ��ó���� > ��ó���� ���� > _CRT_SECURE_NO_WARNINGS �߰�
- #define _CRT_SECURE_NO_WARNINGS �߰�
*/

#include <stdio.h>

int main(void)
{
	/*
		������� \��ȣ��
		�۲ÿ� ���� \��ȣ�� ��ü ����
	*/

	printf("\"I am a boy.\"\n");
	printf("I am a \'boy\'.\n");
	printf("I\tam\ta\tboy.\n");
	printf("I\bam a boy.\n");
	printf("I am a boy\\\?\n");

	printf("\n");

	char character = 'x';
	int inumber = 92;
	double dnumber = 20.201005;
	printf("%c\n", character); // ���� �����ϴ� ����
	printf("%d\n", character); // ��ȣ �ִ� 10���� ����
	printf("%d\n", inumber);
	printf("%x\n", inumber); // ��ȣ����(unsigned) 16���� ����
	printf("%o\n", inumber); // ��ȣ����(unsigned) 8���� ����
	printf("%f\n", dnumber); // 10���� ����� �ε��Ҽ��� �Ǽ�
	printf("%e\n", dnumber); // ���� ����� �ε��Ҽ��� �Ǽ�

	printf("\n");

	character = 'H';
	int num = 548;
	float fnum = 1.1234567;
	printf("%5c\n", character);
	printf("%-5c\n", character);
	printf("%10d\n", num);
	printf("%-10d\n", num);	
	printf("%10f\n", fnum);
	printf("%-10f\n", fnum);
	printf("%10.3f\n", fnum);
	printf("%-10.3f\n", fnum);

	printf("\n");

	//scanf_s("%c", &character);
	//scanf_s("%d", &num);
	//scanf_s("%f", &fnum);
	//printf("%c %d %f \n", character, num, fnum);

	printf("\n");

	int num1, num2, num3;
	float fnum1, fnum2;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������: %d %d %d \n", num1, num2, num3);

	printf("�Ǽ�, ����, �Ǽ� ���ʴ�� �Է�: ");
	scanf_s("%f %d %f", &fnum1, &num1, &fnum2);
	printf("�Էµ� ����: %0.2f %d %0.2f \n", fnum1, num1, fnum2);

	return 0;
}