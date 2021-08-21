#include <stdio.h> 


// call by value - 값에 의한 호출 
//void move(int xpos , int ypos );
//
//int main(void)
//{
//	int	x = 10;
//	int	y = 20;
//	printf("현재의 위치 (%d, %d) \n", x, y); //x, y 변수 값 출력
//	move(x, y); // 함수호출
//	printf("현재의 위치 (%d, %d) \n", x, y); //x, y 변수 값 출력
//	return 0;
//}
//
//void move(int xpos , int ypos)
//{
//	xpos = xpos + 1;
//	ypos = ypos + 1;
//	printf("xpos =%d \n", xpos); //변수 값 출력
//	printf("ypos =%d \n", ypos); //변수 값 출력
//}




// call by reference - 참조에 의한 호출 
//void move(int *xpos , int *ypos );
//
//int main(void)
//{
//	int	x = 10;
//	int	y = 20;
//	printf("현재의 위치 (%d, %d) \n", x, y); //x, y 변수 값 출력
//	move(&x, &y); // 함수호출
//	printf("현재의 위치 (%d, %d) \n", x, y); //x, y 변수 값 출력
//	return 0;
//}
//
//void move(int *xpos , int *ypos)
//{
//	*xpos = *xpos + 1;
//	*ypos = *ypos + 1;
//	printf("xpos =%d \n", *xpos); //변수 값 출력
//	printf("ypos =%d \n", *ypos); //변수 값 출력
//}




// 값에 의한 호출과 변수값 변경 
//void swap(int x, int y);
//int main(void)
//{
//	int a = 100, b = 200;
//	swap(a, b);
//	printf("a=%d, b=%d", a, b);
//	return 0;
//}
//void swap(int x, int y)
//{
//	int tmp;
//	tmp	= x; 
//	x = y;
//	y =	tmp;
//}



// 참조에 의한 호출과 변수값 변경 
//void swap(int *px, int *py);
//int main(void)
//{
//	int a = 100, b = 200;
//	swap(&a, &b);
//	printf("a=%d, b=%d", a, b);
//	return 0;
//}
//void swap(int *px, int *py)
//{
//	int tmp;
//	tmp	= *px; 
//	*px = *py;
//	*py = tmp;
//}
                        



//int main(void)
//{
//	int a[] = {10, 20, 30};
//	printf("&a[0] = %u \n", &a[0]);	 //1 번째 원소의 주소 출력
//	printf("&a[1] = %u \n", &a[1]);
//	printf("&a[2] = %u \n", &a[2]);
//	printf("a = %u \n", a); 		// 변수 a 의 값 출력
//	return 0;
//}




//int main(void)
//{
//	int	a[] = {10, 20, 30};
//	printf("a[0] = %d \n", a[0]);	 //a 배열 1 번째 값 출력
//	printf("*a = %d \n \n", *a);		 //pointer a 의 값 출력
//	printf("a[1] = %d \n", a[1]);
//	printf("*(a+1) = %d \n \n", *(a+1));
//	printf("a[2] = %d \n", a[2]);
//	printf("*(a+2) = %d \n \n", *(a+2));
//	return 0;
//}




//int main(void)
//{
//	int	a[] = {10, 20, 30};
//	int	*p; // 포인터 선언
//	
//	p = a; // 변수 a 의 정보를 변수 p 에 저장
//	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);  // 배열원소들 출력
//	printf("p[0]=%d p[1]=%d p[2]=%d \n \n", p[0], p[1], p[2]);  //	포인터를 배열처럼 출력
//	return 0;
//}




#define MAX 3
int get_sum(int *a, int n);
int main(void)
{
	int data[MAX] = {10, 20, 30};
	int	value;
	value =	get_sum(data, MAX); //	함수 호출 , data 는 배열의 첫 번째 시작 주소
	printf("배열원소의 총 합은 %d \n", value);
	return 0;
}

int get_sum(int *a, int n)
// 인수 data 의 주소 정보를 매개변수 pointer a 의 주소로
// 배열 크기 MAX 를 n 변수에 저장
{
	int	i;
	int	sum = 0;
	for(i=0; i<n; i++)
	{
		printf("%d 번째 원소의 값 = %d \n", i , a+i);
		sum += *(a+i);
		// int 단위, 4byte씩 주소 증가하여 정보 추출
	}
	return sum;
}





 
