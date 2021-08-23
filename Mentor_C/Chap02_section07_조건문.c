/*
파일명: section07.c
작성자: 진상영
작성일: 2021-06-19
내용: 조건문
1) if문
2) if, else, else if
3) else절 생략가능
4) 중첩 if문
5) switch문 case, default, break
*/

#include <stdio.h>

int main(void)
{
	//int num;
	//printf("정수를 입력하시오: ");
	//scanf_s("%d", &num);
	//if (num < 3)
	//	printf("num is smaller than 3!");
	//if (num == 3)
	//	printf("num is 3!");
	//if (num > 3)
	//	printf("num is bigger than 3!");

	//char alpha = 'A';
	//if (alpha == 'B')
	//	printf("alpha is B.\n");
	//else
	//	printf("alpha is not B.\n");

	//char alpha = 'A';
	//if (alpha == 'A')
	//{
	//	printf("alpha is A.\n");
	//	printf("I like apple.\n");
	//}
	//else if (alpha == 'B')
	//{
	//	printf("alpha is B.\n");
	//	printf("I like banana.\n");
	//}
	//else if (alpha == 'C')
	//{
	//	printf("alpha is C.\n");
	//	printf("I like carrot.\n");
	//}
	//else
	//{
	//	printf("I hate fruit & vegetable.\n");
	//}

	//int num1 = 5, num2 = 8;
	//if (num2 > 5)
	//{
	//	if (num1 == 5)
	//		printf("The first if state!\n");
	//}
	//if (num2 < 5)
	//{
	//	if (num1 == 5)
	//		printf("The second if state!\n");
	//}

	//int num;
	//printf("input some positive number : ");
	//scanf_s("%d", &num);
	//switch (num)
	//{
	//	case 1:
	//		printf("num is 1\n");
	//		break;
	//	case 2:
	//		printf("num is 2\n");
	//		break;
	//	case 3:
	//		printf("num is 3\n");
	//		break;
	//	default:
	//		printf("maybe bigger than 3\n");
	//		break;
	//}
	//printf("switch state end.\n");

	int num;
	printf("input some positive number : ");
	scanf_s("%d", &num);

	switch (num)
	{
		case 1:
		case 3:
		case 5:
			printf("odd\n");
			break;
		case 2:
		case 4:
		case 6:
			printf("even\n");
			break;
		default:
			printf("maybe bigger than 6\n");
	}
	printf("switch state end.\n");

	return 0;
}