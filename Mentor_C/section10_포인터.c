/*
���ϸ�: section10.c
�ۼ���: ����
�ۼ���: 2021-06-26
����: �������� �Ұ�
1) ������ ����
2) ������ ����
- ���������� (*) 
  �� ����������-������ ���� ���� 
  �� �Ϲݿ����-�����Ͱ� ����Ű�� �� ��ȯ
- �ּҿ����� (&): �ش� ������ �ּҰ� ��ȯ

*/

#include <stdio.h>

int main(void)
{
	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char *cptr = &cnum;
	//int *iptr = &inum;
	//double *dptr = &dnum;

	//printf("%p\n", cptr);
	//printf("%p\n", iptr);
	//printf("%p\n", dptr);
	//printf("=========================\n");
	//printf("%p\n", &cnum);
	//printf("%p\n", &inum);
	//printf("%p\n", &dnum);


	int num = 20;
	int* pnum;
	pnum = &num;

	*pnum = 20;
	printf("num: %d\n", num);
	(*pnum)++;
	(*pnum)++;
	printf("num: %d\n", num);
	printf("*pnum: %d\n", *pnum);
			

	return 0;
}