#include <stdio.h>

int main(void)
{
	//int a = 10;
	//int *p = &a;
	//*p = 20;
	//printf("%d\n", a);
	//*p = 50;
	//printf("%d\n", a);



	//int number = 10;
	//int* pnumber = &number;

	//printf("%d\n", *pnumber);
	//printf("%p\n", pnumber);



	//int *ptr;
	//int num1 = 5;
	//int num2 = 8;

	//ptr = &num1;
	//printf("%d\n", *ptr);
	//ptr = &num2;
	//printf("%d\n", *ptr);



	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	n1 = 200;
	n2 = 100;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}