/*
내용
*/

#include <stdio.h> 

int main(void)
{
//	double width, length, height;
//	double volume;
//		
//	printf("상자의 가로 세로 높이를 한번에 입력하시오: ");
//	scanf("%lf %lf %lf", &width, &length, &height);
//	
//	volume = width*length*height;
//	printf("상자의 부피는 %f입니다.", volume);



	int x, y;
	
	printf("두개의 정수를 입력하시오. ");
	scanf("%d %d", &x, &y);
	
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d", x, y, x/y);
	
	return 0;	
}

