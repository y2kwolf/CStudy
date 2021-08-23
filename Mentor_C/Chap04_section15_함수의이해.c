/*
���ϸ�: section15.c
�ۼ���: ����
�ۼ���: 2021-08-10
����: �Լ��� ����
1) �Լ��� ���ǿ� ����
- ����� ���� �Լ�
- �Լ� ����� ���� �и��ϱ�
: �����- �Լ��� ���¸� �����ϸ� ��ȯ��, �Լ���, �Ű����� ����
: ���Ǻ�- �Լ��� ����� �����ϸ� ��ȯ��, �Լ���, �Ű�����, ��ü ����

2) �Լ��� ����
- �Է°��� ��ȯ�� ��� �ִ� ���
- �Է°��� �����ϴ� ���
- ��ȯ���� �����ϴ� ���
- �Է°��� ��ȯ�� ��� ���� ���

3) ������ �����ֱ�
- ���� ����
- ���� ����
- static ���� (static Ű���� ���)

*/

#include <stdio.h>
/* 

// ����� ���� �Լ� ����
int add(int a, int b)
{
	// �Է¹��� �� ���� ���� ���Ͽ� ��ȯ
	return a + b;
}

int main(void)
{
	int result;

	// ����� ���� �Լ� ȣ��
	result = add(3, 5);
	printf("�Լ��� ��ȯ�� ��: %d\n", result);
	
	return 0;
}

*/

/*
// �Լ� ����� ���� �и��ϱ�
// add �Լ��� ����(�����)
int add(int a, int b);
	
int main(void)
{
	int result;

	result = add(3, 5);
	printf("�Լ��� ��ȯ�� ��: %d\n", result);

	return 0;
}

// add �Լ��� ���(���Ǻ�)
int add(int a, int b)
{
	return a + b;
}
*/

/*
// �Է°��� ��ȯ�� ��� �ִ� ���
// ������ ������ �� ���� ���޹޾� ������ ������ ��ȯ
int getBigger(int n1, int n2)
{
	if (n1 > n2)
		return n1;
	else if (n1 < n2)
		return n2;
	else
		return 0;
}

int main(void)
{
	int result;

	result = getBigger(3, 5);
	printf("ù ��° ���: %d\n", result);

	result = getBigger(8, 2);
	printf("�� ��° ���: %d\n", result);

	result = getBigger(4, 4);
	printf("�� ��° ���: %d\n", result);

	return 0;
}
*/

/*
// �Է°��� �����ϴ� ���
void printNumber(int num)
{
	printf("����� �Է��� ������ %d�Դϴ�.\n", num);
}

int main(void)
{
	printNumber(3);
}
*/

/*
// ��ȯ���� �����ϴ� ���
int inputNumber(void)
{
	int num;
	printf("������ �Է��� �ּ���: ");
	scanf("%d", &num);

	return num;
}
int main(void)
{
	int result;
	result = inputNumber();
	printf("%d", result);
}
*/

void increaseNumber()
{
	static int number = 0; // �������� ����
	number++;
	printf("number: %d\n", number);
}

int main(void)
{
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	
	return 0;
}



