/*
����
*/

#include <stdio.h> 

int main(void)
{
//	double width, length, height;
//	double volume;
//		
//	printf("������ ���� ���� ���̸� �ѹ��� �Է��Ͻÿ�: ");
//	scanf("%lf %lf %lf", &width, &length, &height);
//	
//	volume = width*length*height;
//	printf("������ ���Ǵ� %f�Դϴ�.", volume);



	int x, y;
	
	printf("�ΰ��� ������ �Է��Ͻÿ�. ");
	scanf("%d %d", &x, &y);
	
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d", x, y, x/y);
	
	return 0;	
}

