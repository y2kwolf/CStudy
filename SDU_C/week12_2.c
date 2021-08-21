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
//	printf("덧셈결과=%d \n", sum);
//	
//	sum = add(6, 8);
//	printf("덧셈결과=%d \n", sum);
//	
//	return 0;
//}



// 제곱값 구하기 
//int square(int n); // 함수원형선언 
//
//int main(void){
//	int result;
//	 
//	result = square(10);
//	printf("제곱값은: %d", result);
//}
//
//int square(int n) {	
//	return(n*n);
//}




// 누승값 구하기
//int power(int x, int y); // 함수원형선언 
//
//int main(void){
//	int a, b, result;
//		
//	printf("두 개의 정수를 입력하시오:");
//	scanf("%d %d", &a, &b);
//	
//	result = power(a, b);
//	
//	printf("%d의 %d승은 %d입니다.", a, b, result);
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




//  큰수 구하기 
//int get_larger(int x, int y);
//
//int main(void){ 
//	int a, b, result;
//	
//	printf("두 개의 정수를 입력하시오:");
//	scanf("%d %d", &a, &b);	
//	
//	printf("두수 중에서 큰 수는 %d입니다.", get_larger(a, b));
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




// 큰수 구하기 2
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
	
	printf("실수를 입력하시오:");
	scanf("%lf", &x);
	printf("실수를 입력하시오:");
	scanf("%lf", &y);
	
	result = get_bigger(x, y);
	printf("더 큰수는 %lf입니다.\n", result);
	return 0;	
}


// 화씨를 섭씨로 바꾸기
//double FtoC(double temp_f);
//
//
//int main(void)
//{
//	double c, f;
//	
//	printf("화씨온도를 입력하시오:");
//	scanf("%lf", &f);	
//	printf("화씨온도 %.1f는 섭씨온도 %.1f에 해당한다.", f, FtoC(f));
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




// 소수 여부 판단하기
//int is_prime(int);  // 소수판단함수 
//int get_interger(void);  // 입력함수 
//
//int main(void) 
//{
//	int n, result;
//	
//	n = get_integer();  //입력함수 호출 
//	result = is_prime(n);  //소수판단 함수 호출
//	
//	if(result == 1)   //리턴값이 1이면 소수
//		printf("%d은 소수입니다. \n", n);
//		
//	else  //리턴값이 0이면 소수가 아님
//		printf("%d은 소수가 아닙니다. \n", n);
//	
//	return 0;
//}
//
//int get_integer(void) // 입력함수
//{
//	int n;
//	
//	printf("정수를 입력하시오:");
//	scanf("%d", &n);  // 정수입력 
//	return n;  // n변수에 저장된 값을 리턴 
// }
//
//int is_prime(int n)
//{
//	int i;
//	
//	for(i=2; i<n ; i++)
//	{
//		if(n%i == 0)  // 나눈 값이 0이면 소수가 아님
//			return 0;  // 0리턴 
//	}
//	return 1;  // 1로 소수임을 구분하여 리턴 
//}




// 약수의 합 계산하기 
//int get_integer(void);  // 입력함수 
//int is_prime(int);  // 약수합 계산 함수 
//
//int main(void) 
//{
//	int n, result;
//	
//	n = get_integer();  // 입력함수 호출 
//	result = is_prime(n);  // 약수들의 합계산 함수 호출
//	
//	printf("%d의 약수들의 합은 %d입니다. \n", n, result);
//	
//	return 0;
//}
//
//int get_integer(void) // 입력함수
//{
//	int n;
//	
//	printf("정수를 입력하시오:");
//	scanf("%d", &n);  // 정수입력 
//	return n;  // n변수에 저장된 값을 리턴 
// }
//
//int is_prime(int n)
//{
//	int i;
//	int sum = 0;
//	
//	for(i=1; i<=n ; i++)
//	{
//		if(n%i == 0)  // 나눈 값이 0이면 값을 누적한다. 
//			sum += i;  // 0리턴 
//	}
//	return sum;
//}




// 방정식 결과값 구하기
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



































