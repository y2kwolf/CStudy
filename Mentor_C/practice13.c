#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[50];
	//char str2[50];
	//gets(str1);
	//gets(str2);
	//if (strcmp(str1, str2) == 0)
	//	printf("�����ϴ�.\n");
	//else
	//	printf("���� �ʽ��ϴ�.\n");



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
	printf("���ڿ� �Է�: ");
	gets(str);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum += str[i] - '0';
		}
	}
	printf("������ ����: %d\n", sum);

	return 0;
}