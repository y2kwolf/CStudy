#include <stdio.h>

//int main(void)
//{
//	int number = 10;
//	char ch = 'A';
//	float real_number = 21.3;
//	
//	printf("number�� �ּ�: %d \n", &number);  // �����ּ� ���
//	printf("ch�� �ּ�: %d \n", &ch); 
//	printf("real_number�� �ּ�: %d \n", &real_number);
//	
//	return 0;
//}



//int main(void)
//{
//	int i = 10;
//	int *p;
//	p = &i;  // ������ ������ i ������ �ּ� ����
//	
//	printf("i�� ��=%d \n", i);		// i������ ��� 
//	printf("i�� �ּ�=%d \n", &i);	// i������ �ּ� ��� 
//	printf("p�� ��=%d \n", p);		// �����ͺ��� �� ��� 
//	printf("*p�� ��=%d \n", *p);	// �����Ͱ� ����Ű�� ������ �� ��� 
//}



//int main(void)
//{
//	int x = 100;
//	int y = 200;
//	int *p;
//	
//	p = &x;
//	printf("p�� ��=%d \n", p);
//	printf("*p�� ��=%d \n", *p);
//	
//	p = &y;
//	printf("p�� ��=%d \n", p);
//	printf("*p�� ��=%d \n", *p);
//	
//	return 0;
//}



//int main(void)
//{
//	int i = 10;
//	int *p;
//	p = &i;
//	
//	printf("i�� ��=%d \n", i);
//	
//	*p = 20;
//	printf("i�� ��=%d \n", i);
//}



int main(void)
{
	char c; short s; int i;
	char *pc;
	short *ps;
	int *pi;
	
	pc = &c; ps = &s; pi = &i;
	printf("���� ��: char pc=%d, short ps=%d, int pi=%d \n", pc, ps, pi);
	
	pc++, ps++; pi++;
	printf("���� ��: char pc=%d, short ps=%d, int pi=%d \n", pc, ps, pi);
}














