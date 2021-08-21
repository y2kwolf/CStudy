#include <stdio.h> 


// call by value - ���� ���� ȣ�� 
//void move(int xpos , int ypos );
//
//int main(void)
//{
//	int	x = 10;
//	int	y = 20;
//	printf("������ ��ġ (%d, %d) \n", x, y); //x, y ���� �� ���
//	move(x, y); // �Լ�ȣ��
//	printf("������ ��ġ (%d, %d) \n", x, y); //x, y ���� �� ���
//	return 0;
//}
//
//void move(int xpos , int ypos)
//{
//	xpos = xpos + 1;
//	ypos = ypos + 1;
//	printf("xpos =%d \n", xpos); //���� �� ���
//	printf("ypos =%d \n", ypos); //���� �� ���
//}




// call by reference - ������ ���� ȣ�� 
//void move(int *xpos , int *ypos );
//
//int main(void)
//{
//	int	x = 10;
//	int	y = 20;
//	printf("������ ��ġ (%d, %d) \n", x, y); //x, y ���� �� ���
//	move(&x, &y); // �Լ�ȣ��
//	printf("������ ��ġ (%d, %d) \n", x, y); //x, y ���� �� ���
//	return 0;
//}
//
//void move(int *xpos , int *ypos)
//{
//	*xpos = *xpos + 1;
//	*ypos = *ypos + 1;
//	printf("xpos =%d \n", *xpos); //���� �� ���
//	printf("ypos =%d \n", *ypos); //���� �� ���
//}




// ���� ���� ȣ��� ������ ���� 
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



// ������ ���� ȣ��� ������ ���� 
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
//	printf("&a[0] = %u \n", &a[0]);	 //1 ��° ������ �ּ� ���
//	printf("&a[1] = %u \n", &a[1]);
//	printf("&a[2] = %u \n", &a[2]);
//	printf("a = %u \n", a); 		// ���� a �� �� ���
//	return 0;
//}




//int main(void)
//{
//	int	a[] = {10, 20, 30};
//	printf("a[0] = %d \n", a[0]);	 //a �迭 1 ��° �� ���
//	printf("*a = %d \n \n", *a);		 //pointer a �� �� ���
//	printf("a[1] = %d \n", a[1]);
//	printf("*(a+1) = %d \n \n", *(a+1));
//	printf("a[2] = %d \n", a[2]);
//	printf("*(a+2) = %d \n \n", *(a+2));
//	return 0;
//}




//int main(void)
//{
//	int	a[] = {10, 20, 30};
//	int	*p; // ������ ����
//	
//	p = a; // ���� a �� ������ ���� p �� ����
//	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);  // �迭���ҵ� ���
//	printf("p[0]=%d p[1]=%d p[2]=%d \n \n", p[0], p[1], p[2]);  //	�����͸� �迭ó�� ���
//	return 0;
//}




#define MAX 3
int get_sum(int *a, int n);
int main(void)
{
	int data[MAX] = {10, 20, 30};
	int	value;
	value =	get_sum(data, MAX); //	�Լ� ȣ�� , data �� �迭�� ù ��° ���� �ּ�
	printf("�迭������ �� ���� %d \n", value);
	return 0;
}

int get_sum(int *a, int n)
// �μ� data �� �ּ� ������ �Ű����� pointer a �� �ּҷ�
// �迭 ũ�� MAX �� n ������ ����
{
	int	i;
	int	sum = 0;
	for(i=0; i<n; i++)
	{
		printf("%d ��° ������ �� = %d \n", i , a+i);
		sum += *(a+i);
		// int ����, 4byte�� �ּ� �����Ͽ� ���� ����
	}
	return sum;
}





 
