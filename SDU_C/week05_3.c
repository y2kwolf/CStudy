#include <stdio.h>

int main(void)
{
//	int i;
//	float f;
//	i = 3.141592;
//	f = 5;
//	
//	printf("i = %d", i);
//	printf("\n");
//	printf("f = %f", f);

	
//	double width, height, ;
//	double volume;
//	
//	printf("상자의 가로 세로 높이를 한번에 입력하시오: ");
//	scanf("%lf %lf %lf", &x, &y, &z);
//	
//	volume = x * y * z;
//	printf("상자의 부피는 %lf", volume);



//	double light_speed = 300000; 	// 빛의 속도를 저장하는 변수 (300000km/
//	double distance = 149600000; 	// 태양과 지구 사이 거리를 저장하는 변수
//	// 149600000km 로 초기화한다 .
//	double time;					// 시간을 나타내는 변수
//	time = distance / light_speed;  // 거리를 빛의 속도로 나눈다 .
//	printf("빛의 속도는 %fkm/s \n", light_speed);
//	printf("태양과 지구와의 거리 %fkm \n", distance);
//	printf("도달 시간은 %f초 \n", time);	// 시간을 출력한다 .


	
	double light_speed = 300000;  //변수는 자료형 선언과 함께 초기화 가능 
	double year_second = 365*24*60*60;
	double distance = light_speed*year_second;
	
	printf("빛의 속도는 %fkm/s\n", light_speed);
	printf("1년은 %f초이다. \n", year_second);
	printf("빛이 진행한 거리는 %fkm", distance);	
	
	return 0;
}
