#include <stdio.h>
#define STUDENTS 5

int main(void){
	int i;
//	int score[STUDENTS]; //�迭������� ��ȣ��� ��� 

//	score[0]=90; // �迭 �ʱ�ȭ 
//	score[1]=80;
//	score[2]=70;
//	score[3]=80;
//	score[4]=70;
	
	int score[5] = {90, 80, 70, 80, 70}; // �迭 �ʱ�ȭ 
	
	for(i=0; i<STUDENTS; i++){
		printf("%d��° �л��� ������ %d�Դϴ�.\n", i, score[i]);
	}
	return 0;
}


//int main(void){
//	int i, sum;
//	double avg;
//	int score[STUDENTS]; //�迭������� ��ȣ��� ��� 
//	sum = 0;
//	
//	for(i=0; i<STUDENTS; i++){
//		printf("������ �Է��Ͻÿ�:");
//		scanf("%d", &score[i]);
//		sum += score[i];
//	}
//	avg = sum/STUDENTS;
//	printf("���� ���=%f", avg);
//	
//	return 0;
//}
