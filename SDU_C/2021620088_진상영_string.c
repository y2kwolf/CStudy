#include <stdio.h>

int main(void)
{
	
	char study[] = "C �� ���� �ֽ��ϴ�.";    // ���ڿ� �迭 �ʱ�ȭ 
	printf("%s \n", study);  	// ���ڿ� �迭 ��� 
	
	char word[100], i;
	printf("���� �ܾ �ϳ� �Է��Ͻÿ�: ");	
	scanf(" %s", &word);
	
	i = 0;
	while(word[i] != '\0')	// null �������� �˻� 
		i++;   // null ���ڰ� �ƴϸ� ���� 
		
	printf("���ڿ��� ����: %d", i);
	
	return 0;
}  
