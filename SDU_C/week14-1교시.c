#include <stdio.h>

//int main(void)
//{
//	int number = 10;
//	char ch = 'A';
//	float real_number = 21.3;
//	
//	printf("number의 주소: %d \n", &number);  // 변수주소 출력
//	printf("ch의 주소: %d \n", &ch); 
//	printf("real_number의 주소: %d \n", &real_number);
//	
//	return 0;
//}



//int main(void)
//{
//	int i = 10;
//	int *p;
//	p = &i;  // 포인터 변수에 i 변수의 주소 저장
//	
//	printf("i의 값=%d \n", i);		// i변수값 출력 
//	printf("i의 주소=%d \n", &i);	// i변수의 주소 출력 
//	printf("p의 값=%d \n", p);		// 포인터변수 값 출력 
//	printf("*p의 값=%d \n", *p);	// 포인터가 가리키는 변수의 값 출력 
//}



//int main(void)
//{
//	int x = 100;
//	int y = 200;
//	int *p;
//	
//	p = &x;
//	printf("p의 값=%d \n", p);
//	printf("*p의 값=%d \n", *p);
//	
//	p = &y;
//	printf("p의 값=%d \n", p);
//	printf("*p의 값=%d \n", *p);
//	
//	return 0;
//}



//int main(void)
//{
//	int i = 10;
//	int *p;
//	p = &i;
//	
//	printf("i의 값=%d \n", i);
//	
//	*p = 20;
//	printf("i의 값=%d \n", i);
//}



int main(void)
{
	char c; short s; int i;
	char *pc;
	short *ps;
	int *pi;
	
	pc = &c; ps = &s; pi = &i;
	printf("증가 전: char pc=%d, short ps=%d, int pi=%d \n", pc, ps, pi);
	
	pc++, ps++; pi++;
	printf("증가 후: char pc=%d, short ps=%d, int pi=%d \n", pc, ps, pi);
}














