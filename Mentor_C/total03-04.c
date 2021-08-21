#include <stdio.h>

int main(void)
{
	char word[50];
	int length = 0, i;
	int isPalindromers;

	printf("문자열 입력: ");
	scanf("%s", word);

	while (word[length] != '\0')
		length++;

	for (i = 0; i <= length / 2; i++)
	{
		if (word[i] != word[length - i - 1])
		{
			isPalindromers = 0;
			break;
		}

		isPalindromers = 1;
	}

	printf(isPalindromers ? "동일합니다.\n" : "동일하지 않습니다.\n");

	return 0;
}