/*
���ϸ�: section13.c
�ۼ���: ����
�ۼ���: 2021-07-31
����: ���ڿ��� �Լ�
1) ���ڿ��� ������
- �迭����� ���ڿ�: ���� ������ ���ڿ�
- �����ͱ���� ���ڿ�: ��� ������ ���ڿ�
2) ���ڿ� ���� �Լ�
- getchar(), gets() ���ڿ� �Է��Լ�
- putchar(), puts() ���ڿ� ����Լ�, 
*/

#include <stdio.h>
#include <string.h> // ���ڿ�ó�� ǥ���Լ� ���

int main(void)
{
	//char good[] = "Good!";	// �迭��� ���ڿ�
	//char* bad = "Bad!";		// �����ͱ�� ���ڿ�
	//printf("%s %s\n", good, bad);

	//good[0] = 'H';
	//// bad[0] = 'H';	// ���� ��Ұ� �Ҵ� �Ұ���
	//printf("%s %s\n", good, bad);

	//// good = "New Good";	// ���ο� �ּҰ� �Ҵ� �Ұ���
	//bad = "New Bad";	
	//printf("%s %s\n", good, bad);



	//int ch1, ch2;
	//ch1 = getchar();
	//ch2 = getchar();
	//putchar(ch1); putchar(ch2);



	//int ch;
	//while (1)
	//{
	//	ch = getchar();
	//	if (ch == EOF)  // ctrl+z �Է� EOF��ȯ
	//		break;
	//	putchar(ch);
	//}



	//char ch[30];
	//gets(ch);
	//puts(ch);
	//printf("�� ���ڿ��� ���� �ٿ��� ��µ˴ϴ�.\n");
	


	//char str1[50] = "apple is good";
	//char str2[50] = "berry is good";
	//char str3[50];
	//// �� ���ڿ��� ���� ���
	//printf("str1�� ����: %d, str2�� ����: %d\n", strlen(str1), strlen(str2));
	//// str1�� ���� ��ü�� str3�� �����ϱ�
	//strcpy(str3, str1);
	//// str1�� ���� �� �ټ� ���ڸ� str2�� �����ϱ�
	//strncpy(str2, str1, 5);
	//printf("%s\n%s\n%s\n", str1, str2, str3);



	char str1[50] = "Michael ";
	char str2[50] = "Michael ";
	// str1�� ���ڿ� ���̱�
	strcat(str1, "Bolton");
	printf("%s\n", str1);
	// str2�� 7���� ���� ���̱�
	strncat(str2, "Jackson Five", 7);
	printf("%s\n", str2);
	// str1�� str2 ��
	printf("�񱳰��: %d\n", strcmp(str1, str2));
	// str1�� str2 ���� 7�� ���ڸ� ��
	printf("�񱳰��: %d\n", strncmp(str1, str2, 7));





	return 0;
}