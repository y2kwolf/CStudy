#include <stdio.h>

int main(void)
{
	char word[50];
	int length = 0, i;
	int isPalindromers;

	printf("���ڿ� �Է�: ");
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

	printf(isPalindromers ? "�����մϴ�.\n" : "�������� �ʽ��ϴ�.\n");

	return 0;
}