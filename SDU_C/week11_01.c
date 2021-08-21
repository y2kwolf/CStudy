#include <stdio.h>
#define STUDENTS 5

int main(void){
	int i;
//	int score[STUDENTS]; //배열사이즈는 기호상수 사용 

//	score[0]=90; // 배열 초기화 
//	score[1]=80;
//	score[2]=70;
//	score[3]=80;
//	score[4]=70;
	
	int score[5] = {90, 80, 70, 80, 70}; // 배열 초기화 
	
	for(i=0; i<STUDENTS; i++){
		printf("%d번째 학생의 점수는 %d입니다.\n", i, score[i]);
	}
	return 0;
}


//int main(void){
//	int i, sum;
//	double avg;
//	int score[STUDENTS]; //배열사이즈는 기호상수 사용 
//	sum = 0;
//	
//	for(i=0; i<STUDENTS; i++){
//		printf("성적을 입력하시오:");
//		scanf("%d", &score[i]);
//		sum += score[i];
//	}
//	avg = sum/STUDENTS;
//	printf("성적 평균=%f", avg);
//	
//	return 0;
//}
