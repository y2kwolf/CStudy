#include <stdio.h>

int main(void)
{
	//int age, fee;	
	//printf("나이를 입력하세요:");
	//scanf_s("%d", &age);
	//fee = age >= 20 ? 1250 : 800;
	//printf("당신의 나이는 %d세이며, 요금은 %d원입니다!", age, fee);

	//printf("\n");

	//int age, height;
	//char pass;
	//printf("나이를 입력하세요:");
	//scanf_s("%d", &age);
	//printf("키를 입력하세요:");
	//scanf_s("%d", &height);
	//pass = (age >= 12 && height >= 120) ? printf("놀이기구에 탑승할 수 있습니다.\n") : \
	//	   printf("놀이기구에 탑승할 수 없습니다.\n");

	//printf(age >= 12 && height >= 120 ? "놀이기구에 탑승할 수 있습니다.\n" : "놀이기구에 탑승할 수 없습니다.\n");

	//printf("\n");

	unsigned char num1 = 3;
	unsigned char num2 = 24;

	printf("%d\n", num1 << 3);
	printf("%d\n", num2 >> 2);

	return 0;
}