#include <stdio.h>

int main(void)
{
	printf("%10.3f \n", 152.49861);  // (OOO)152.499
	printf("you\tcan\tmaker\t\n"); // you	can		maker	
	printf("\"Everybody say \'hello\'!\"\n"); // "Everybody say 'hello'!"

	printf("\n");

	printf("   *   \n");
	printf("  ***  \n");
	printf(" ***** \n");
	printf("*******\n");

	printf("\n");

	int num;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);
	printf("�Է� ��: %d", num);

	return 0;

}