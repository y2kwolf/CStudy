#include <stdio.h>


//#define GAME 3
//int main(void){
//	
//	int i;
//	int sum=0;
//	double avg;
//	int point[GAME];
//	
//	for(i=0; i<GAME; i++){
//		printf("���� %d���� ������ ������ : ", i+1);
//		scanf("%d", &point[i]);
//		sum += point[i];
//	}
//	avg = ((double)sum / 3); //����� ����ȯ 
//	printf("��� ������: %.2f�Դϴ�.", avg);
//	
//	return(0);	
//}



//#define SIZE 5
//int main(void){
//	
//	int freq[SIZE] = {0};
//	int i;
//	
//	for(i=0; i<10000; i++)
//		++freq[rand()%6];
//	
//	printf("===========================\n");
//	printf("��     ��\n");
//	printf("===========================\n");
//	
//	for(i=0; i<SIZE; i++)
//		printf("%3d   %3d \n", i+1, freq[i]);
//		
//	return 0;
//}



//#define SIZE 5
//int main(void){
//	int i, seat_num;
//	int seats[SIZE] = {0};
//	
//	while(1){
//		printf("---------------\n");
//		printf("  1  2  3  4  5\n");
//		printf("---------------\n");
//		for(i=0; i<SIZE; i++)
//			printf("  %d", seats[i]);
//		printf("\n");
//		
//		printf("���Ͻô� �¼���ȣ�� �Է��ϼ���(����� 0):");
//		scanf("%d", &seat_num);
//		
//		if(seat_num == 0){
//			break;
//		}
//		else if(seat_num < 0 || seat_num > SIZE){
//			printf("1���� 5������ ���ڸ� �Է��ϼ���.\n\n");
//			continue;
//		}
//		
//		if(seats[seat_num-1] == 0){
//			seats[seat_num-1] = 1;
//			printf("����Ǿ����ϴ�.\n\n");
//		}
//		else{			
//			printf("�̹� ����� �ڸ��Դϴ�.\n\n");		
//		}
//	}	
//	
//	return 0;
//}



//#define SIZE 10
//int main(void){
//	int s[SIZE] = {12, 3, 19, 6, 18, 8, 12, 4, 1, 19};
//	int i, minimum;
//	
//	minimum = s[0];
//	
//	for(i=1; i<SIZE; i++){
////		printf("%d\n", minimum);
//		if(s[i]<minimum)
//			minimum = s[i];
//	}
//	printf("�ּҰ��� %d�Դϴ�.", minimum);
//	
//	return 0;
//}



int main(void){
	int array[8];
	int x;
	
	for(x=0; x<8; x++){
		printf("%d��° �迭�� �Է�:", x+1);
		scanf("%d", &array[x]);
	}
	printf("�Է¹迭 ���:");
	for(x=0; x<8; x++)
		printf(" %d", array[x]);
	return 0;
}












