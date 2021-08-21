#include <stdio.h>

int main(void)
{
	//int i;
	//int sum = 0;
	//int myArray[5] = { 2, 5, 8, 17, 21 };

	//for (i = 0; i < 5; i++)
	//{
	//	sum += myArray[i];
	//}
	//printf("배열의 모든 요소의 총합: %d\n", sum);
	//printf("배열의 모든 요소의 평균: %.1f\n", sum/5.0);
	//printf("배열의 모든 요소의 평균: %.1f\n", (double)sum/5);



	//char word[50];
	//int i = 0, length = 0;
	//printf("영단어 입력 : ");
	//scanf("%s", word);
	////length = strlen(word);
	//while (word[i] != '\0')
	//{
	//	length++;
	//	i++;
	//}
	//printf("뒤집은 결과 : ");
	//for (i = length; i >= 0; i--)
	//{
	//	printf("%c", word[i]);
	//}


	int i = 0;
	int max = 0;
	char word[50];

	printf("영단어 입력 : ");
	scanf("%s", word);

	while (word[i] != '\0')
	{
		if (word[i] > max)
			max = word[i];
		i++;
	}

	printf("아스키코드가 가장 큰 문자 : %c\n", max);

	
	return 0;
}