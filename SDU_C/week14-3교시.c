#include <stdio.h>

//int get_min(int , int); 	// �Լ�����
//
//int main(void)
//{
//	int	n1, n2, result;
//	int	(*pf)(int, int); 	// �Լ� �����ͼ���
//	
//	printf("2���� ���ڸ� �Է��Ͻÿ�<��:5 3>: ");
//	scanf("%d %d", &n1, &n2);
//	
//	pf = get_min;  			// get_min �Լ��� �����ּҸ� pf ������ ����
//	result = pf(n1, n2);	// �Լ� �ּҸ� �̿��Ͽ� �Լ��� ȣ��
//	printf("�� ���� ���� %d �Դϴ�. \n", result);
//	return 0;
//}
//int get_min(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}



//int main(void)
//{
//	char str[] = "hello";
//	printf("%s \n", str);
//	char *p = "world";
//	printf("%s \n", p);
//	//	str[]= ���
//	// 	printf ("%s n", str);
//	p = "����"; 
//	printf("%s \n", p);
//	return 0;
//}




//int main( void )
//{
//	int	i;
//	char menu[5][10] = {  
//	"���",
//	"���",
//	"������",
//	"����",
//	"�ø�"
//	};
//	for(i=0; i<5; i++)
//	printf("%d ��° �޴�: %s \n", i+1, menu[i]);
//	// �迭 �� ù ��° ���� ���
//	return 0;
//}




//int main(void)
//{
//	char *p[3] = {"January", "February", "March"};
//	int	i;
//	for(i=0; i<3; i++)
//		printf("%d���� %s �Դϴ� \n", i+1, p[i]);
//	return 0;
//}




#include <string.h> // ���ڿ��� ���� ������ ����ϴ� �Լ�
int main(void)
{
	int i;
	int upper, lower, digit; // �����Ǵ� flag ����
	char pass[30];
	
	while (1)
	{
		printf("��ȣ�� �����Ͻÿ�:");
		scanf(" %s", pass); // ���ڿ� ����
		
		upper = lower = digit = 0;  //flag �ʱ�ȭ
		
		for (i=0; i<strlen(pass); i++) // ���ڰ�����ŭ �ݺ�
		{
			if (pass[i] >= '0' && pass[i] <= '9') // ����?
				digit = 1;
			else if (pass[i] >= 'A' && pass[i] <= 'Z') // �빮��?
				upper = 1;
			else if (pass[i] >= 'a' && pass[i] <= 'z') // �ҹ���?
				lower = 1;
		}
		
		if ((digit == 1) && (upper == 1) && (lower == 1))
		{
			printf("������ ��ȣ�Դϴ�. \n");
			printf("digit=%d, upper=%d, lower=%d", digit, upper, lower);
			break;
		}
		else
			printf("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��! \n");
	}
	return(0);
}


