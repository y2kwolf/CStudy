#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[50];
	//char str2[50];
	//gets(str1);
	//gets(str2);
	//if (strcmp(str1, str2) == 0)
	//	printf("같습니다.\n");
	//else
	//	printf("같지 않습니다.\n");



	//char str1[50];
	//char str2[50];
	//gets(str1);
	//gets(str2);
	//printf("\n");
	//if (strlen(str1) > strlen(str2))
	//	printf("%s\n%s\n", str1, str2);
	//else
	//	printf("%s\n%s\n", str2, str1);



	char str[50];
	int i;
	int sum = 0;
	printf("문자열 입력: ");
	gets(str);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum += str[i] - '0';
		}
	}
	printf("숫자의 합은: %d\n", sum);

	return 0;
}