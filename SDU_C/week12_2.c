#include <stdio.h>

//int add(int x, int y) {	
//	int result;
//	
//	result = x + y;
//	return(result);
//}
//
//int main(void){
//	
//	int sum;
//	
//	sum = add(2, 3);
//	printf("�������=%d \n", sum);
//	
//	sum = add(6, 8);
//	printf("�������=%d \n", sum);
//	
//	return 0;
//}



// ������ ���ϱ� 
//int square(int n); // �Լ��������� 
//
//int main(void){
//	int result;
//	 
//	result = square(10);
//	printf("��������: %d", result);
//}
//
//int square(int n) {	
//	return(n*n);
//}




// ���°� ���ϱ�
//int power(int x, int y); // �Լ��������� 
//
//int main(void){
//	int a, b, result;
//		
//	printf("�� ���� ������ �Է��Ͻÿ�:");
//	scanf("%d %d", &a, &b);
//	
//	result = power(a, b);
//	
//	printf("%d�� %d���� %d�Դϴ�.", a, b, result);
//	
//	return 0;
//}
//
//int power(int x, int y) {	
//	int i;
//	int value = 1;
//	
//	
//	for(i=0; i<y; i++)
//		value *= x;
//	
//	return value;
//}




//  ū�� ���ϱ� 
//int get_larger(int x, int y);
//
//int main(void){ 
//	int a, b, result;
//	
//	printf("�� ���� ������ �Է��Ͻÿ�:");
//	scanf("%d %d", &a, &b);	
//	
//	printf("�μ� �߿��� ū ���� %d�Դϴ�.", get_larger(a, b));
//	
//	return 0;
//}
//
//int get_larger(int x, int y) {	
//	if(x > y)
//		return x;
//	else
//		return y;	
//}




// ū�� ���ϱ� 2
double get_bigger(double n1, double n2)
{
	double big;
	if(n1>n2)
		big = n1;
	else
		big = n2;
	return big;
}

int main(void)
{
	double x, y, result;
	
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &y);
	
	result = get_bigger(x, y);
	printf("�� ū���� %lf�Դϴ�.\n", result);
	return 0;	
}


// ȭ���� ������ �ٲٱ�
//double FtoC(double temp_f);
//
//
//int main(void)
//{
//	double c, f;
//	
//	printf("ȭ���µ��� �Է��Ͻÿ�:");
//	scanf("%lf", &f);	
//	printf("ȭ���µ� %.1f�� �����µ� %.1f�� �ش��Ѵ�.", f, FtoC(f));
//	
//	return 0;	
//}
//
//double FtoC(double temp_f)
//{
//	double temp_c;
//	temp_c = (5.0*(temp_f-32.0))/9.0;
//	
//	return temp_c;
//}




// �Ҽ� ���� �Ǵ��ϱ�
//int is_prime(int);  // �Ҽ��Ǵ��Լ� 
//int get_interger(void);  // �Է��Լ� 
//
//int main(void) 
//{
//	int n, result;
//	
//	n = get_integer();  //�Է��Լ� ȣ�� 
//	result = is_prime(n);  //�Ҽ��Ǵ� �Լ� ȣ��
//	
//	if(result == 1)   //���ϰ��� 1�̸� �Ҽ�
//		printf("%d�� �Ҽ��Դϴ�. \n", n);
//		
//	else  //���ϰ��� 0�̸� �Ҽ��� �ƴ�
//		printf("%d�� �Ҽ��� �ƴմϴ�. \n", n);
//	
//	return 0;
//}
//
//int get_integer(void) // �Է��Լ�
//{
//	int n;
//	
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &n);  // �����Է� 
//	return n;  // n������ ����� ���� ���� 
// }
//
//int is_prime(int n)
//{
//	int i;
//	
//	for(i=2; i<n ; i++)
//	{
//		if(n%i == 0)  // ���� ���� 0�̸� �Ҽ��� �ƴ�
//			return 0;  // 0���� 
//	}
//	return 1;  // 1�� �Ҽ����� �����Ͽ� ���� 
//}




// ����� �� ����ϱ� 
//int get_integer(void);  // �Է��Լ� 
//int is_prime(int);  // ����� ��� �Լ� 
//
//int main(void) 
//{
//	int n, result;
//	
//	n = get_integer();  // �Է��Լ� ȣ�� 
//	result = is_prime(n);  // ������� �հ�� �Լ� ȣ��
//	
//	printf("%d�� ������� ���� %d�Դϴ�. \n", n, result);
//	
//	return 0;
//}
//
//int get_integer(void) // �Է��Լ�
//{
//	int n;
//	
//	printf("������ �Է��Ͻÿ�:");
//	scanf("%d", &n);  // �����Է� 
//	return n;  // n������ ����� ���� ���� 
// }
//
//int is_prime(int n)
//{
//	int i;
//	int sum = 0;
//	
//	for(i=1; i<=n ; i++)
//	{
//		if(n%i == 0)  // ���� ���� 0�̸� ���� �����Ѵ�. 
//			sum += i;  // 0���� 
//	}
//	return sum;
//}




// ������ ����� ���ϱ�
//double func(double x, double y);
//
//int main(void)
//{
//	double x, y;
//	for(x=0; x<3.0; x+=1.0)
//	{
//		for(y=0; y<3.0; y+=1.0)
//			printf("%f \n", func(x, y));
//	}
//	return 0;
//}
//
//double func(double x, double y)
//{
//	double value;
//	value = 1.5*x + 3.0*y;
//	return value;
//}



































