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
	printf("%d %d %d\n", *sarr, *(sarr+1), *(sarr+2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	// �ּ�Ȯ��
	printf("%p %p %p\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%p %p %p\n", &iarr[0], &iarr[1], &iarr[2]);


	return 0;
}
