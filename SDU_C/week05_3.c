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
//	printf("������ ���� ���� ���̸� �ѹ��� �Է��Ͻÿ�: ");
//	scanf("%lf %lf %lf", &x, &y, &z);
//	
//	volume = x * y * z;
//	printf("������ ���Ǵ� %lf", volume);



//	double light_speed = 300000; 	// ���� �ӵ��� �����ϴ� ���� (300000km/
//	double distance = 149600000; 	// �¾�� ���� ���� �Ÿ��� �����ϴ� ����
//	// 149600000km �� �ʱ�ȭ�Ѵ� .
//	double time;					// �ð��� ��Ÿ���� ����
//	time = distance / light_speed;  // �Ÿ��� ���� �ӵ��� ������ .
//	printf("���� �ӵ��� %fkm/s \n", light_speed);
//	printf("�¾�� �������� �Ÿ� %fkm \n", distance);
//	printf("���� �ð��� %f�� \n", time);	// �ð��� ����Ѵ� .


	
	double light_speed = 300000;  //������ �ڷ��� ����� �Բ� �ʱ�ȭ ���� 
	double year_second = 365*24*60*60;
	double distance = light_speed*year_second;
	
	printf("���� �ӵ��� %fkm/s\n", light_speed);
	printf("1���� %f���̴�. \n", year_second);
	printf("���� ������ �Ÿ��� %fkm", distance);	
	
	return 0;
}
