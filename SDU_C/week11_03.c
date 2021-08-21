#include <stdio.h>

//int main(void){
//	
//	int n[10] = {12, 3, 19, 6, 18, 8, 12, 4, 1, 19};
//	int i, j;
//	
//	printf("요소\t값\t히스토그램\n");
//	for(i=0; i<10; i++){
//		printf("%d\t%d\t", i, n[i]);
//		for(j=0; j<n[i]; j++)
//			printf("*");
//		printf("\n");
//	}
//	
//	return 0;
//}



// 2차원배열
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



//문자열
//int main(void){
//	
// 	char question[] = "한국의 수도는 서울입니까?(y or n):"; 
//	char answer;
//	
//	printf("%s", question);
//	scanf(" %c", &answer);
//	
//	if(answer == 'y')
//		printf("맞았습니다.");
//	else
//		printf("틀렸습니다.");
//}



//문자열 길이계산
//int main(void){
//	
//	char str[100], i;
//	
//	printf("문자열을 입력하시오:");
//	scanf(" %s", str);
//	
//	i = 0;
//	while(str[i] != '\0')	
//		i++;
//		
//	printf("문자열의 크기:%d", i);
//	
//	return 0;
//}



//int main(void){
//	int c, i , nwhite, nother;
//	int ndigit[10];
//	
//	nwhite = nother = 0;  //초기화	 
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
//	printf("숫자=");
//	for(i=0; i<10; ++i)
//		printf("%d ", ndigit[i]);
//		
//	printf(", 공백문자=%d, 기타문자=%d\n", nwhite, nother);
//	
//	return 0;
//}














