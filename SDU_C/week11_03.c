#include <stdio.h>

//int main(void){
//	
//	int n[10] = {12, 3, 19, 6, 18, 8, 12, 4, 1, 19};
//	int i, j;
//	
//	printf("���\t��\t������׷�\n");
//	for(i=0; i<10; i++){
//		printf("%d\t%d\t", i, n[i]);
//		for(j=0; j<n[i]; j++)
//			printf("*");
//		printf("\n");
//	}
//	
//	return 0;
//}



// 2�����迭
//#define ROWS 3
//#define COLS 3
//int main(void){	
//	int A[ROWS][COLS] = {
//		{2, 3, 0},	
//		{8, 9, 1},
//		{7, 0, 5}
//	};
//	int B[ROWS][COLS] = {
//		{1, 0, 0},	
//		{1, 0, 0},
//		{1, 0, 0}
//	};
//	int C[ROWS][COLS];
//	int r, c;
//	
//	for(r=0; r<ROWS; r++)
//		for(c=0; c<COLS; c++)
//			C[r][c] = A[r][c]+B[r][c];
//	
//	for(r=0; r<ROWS; r++){
//		for(c=0; c<COLS; c++)
//			printf("%d ", C[r][c]);
//		printf("\n");
//	}
//		
//	return 0;
//}



//���ڿ�
//int main(void){
//	
// 	char question[] = "�ѱ��� ������ �����Դϱ�?(y or n):"; 
//	char answer;
//	
//	printf("%s", question);
//	scanf(" %c", &answer);
//	
//	if(answer == 'y')
//		printf("�¾ҽ��ϴ�.");
//	else
//		printf("Ʋ�Ƚ��ϴ�.");
//}



//���ڿ� ���̰��
//int main(void){
//	
//	char str[100], i;
//	
//	printf("���ڿ��� �Է��Ͻÿ�:");
//	scanf(" %s", str);
//	
//	i = 0;
//	while(str[i] != '\0')	
//		i++;
//		
//	printf("���ڿ��� ũ��:%d", i);
//	
//	return 0;
//}



//int main(void){
//	int c, i , nwhite, nother;
//	int ndigit[10];
//	
//	nwhite = nother = 0;  //�ʱ�ȭ	 
//	for(i=0; i<10; ++i)
//		ndigit[i] = 0;
//		
//	while((c=getchar()) != EOF){
//		if(c>='0' && c<='9')
//			++ndigit[c-'0'];
//		else if(c==' ' || c=='\n' || c=='\t')
//			++nwhite;
//		else
//			++nother;
//	}
//	printf("����=");
//	for(i=0; i<10; ++i)
//		printf("%d ", ndigit[i]);
//		
//	printf(", ���鹮��=%d, ��Ÿ����=%d\n", nwhite, nother);
//	
//	return 0;
//}














