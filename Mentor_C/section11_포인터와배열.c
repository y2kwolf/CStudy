/*
���ϸ�: section11.c
�ۼ���: ����
�ۼ���: 2021-07-03
����: �����Ϳ� �迭


*/

#include <stdio.h>

int main(void)
{
	//int myArr[3] = {1,2,3};
	//printf("�迭 �� ����� �ּ� Ȯ��\n");
	//printf("�迭�� �̸�: %p\n", myArr);
	//printf("ù��° ���: %p\n", &myArr[0]);
	//printf("�ι�° ���: %p\n", &myArr[1]);
	//printf("����° ���: %p\n", &myArr[2]);



	short sarr[3] = { 1, 2, 3 };
	int iarr[3] = { 10, 20, 30 };
	// �ε��� ��ȣ�� ���� ����
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);
	// ������ ������ ���� ����
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));
	// �ּ�Ȯ��
	printf("%p %p %p\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%p %p %p\n", &iarr[0], &iarr[1], &iarr[2]);



	//int n1 = 3, n2 = 6, n3 = 9;
	//// ������ ������ ���� �� �ʱ�ȭ
	//int* ptr1 = &n1;
	//int* ptr2 = &n2;
	//int* ptr3 = &n3;
	//// ������ �迭�� ���� �� �ʱ�ȭ
	//int* parr[3] = { ptr1, ptr2, ptr3 };
	//// �ּҿ� ����ִ� ���� ����ϰ� �� �ּҸ� ���
	//printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
	//printf("%p %p %p\n", parr[0], parr[1], parr[2]);



	return 0;
}