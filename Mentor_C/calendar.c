#include <stdio.h> 
#include <string.h> 

int limitday[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

// year, pmonth : ����� �⵵�� �� 
// pday : ����(0-�Ͽ���), flagkon : 0-����, 1-�ѱ� 
int printmonth(int year, int pmonth, int pday, int flagkon) 
{ 
	int i; 
	char *monname[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }; 
	if (flagkon) 
		printf("\n %d�� %d��", year, pmonth); 
	else 
		printf("\n %d %s %d", pmonth, monname[pmonth], year); 
	printf("\n -------------%d %d-----------------------\n", year, pmonth); 
	
	if (flagkon) 
		printf(" �� �� ȭ �� �� �� �� \n"); 
	else 
		printf(" SUN MON TUE WED THU FRI SAT \n"); 

	for( i = 0; i < pday; i++) printf(" "); 

	for( i = 1; i <= limitday[pmonth]; i++) 
	{ 
		printf("%5d", i );

		//����Ͽ� �� ���� 
		if( pday == 6 ) printf(" \n"); 

		pday = ++ pday % 7 ; 
	} 
	printf("\n"); 
	return(pday); 
} 

void UsageAndExit(char *msg) 
{ 
	if (msg != NULL) printf("\n%s", msg); 
	printf("\ncalendar ���� : calendar [/k] �⵵[/��]"); 
	printf("\n\t������ �⵵ �Ǵ� �⵵/���� �ش��ϴ� �޷��� ����մϴ�."); 
	printf("\n\t/k\t�ѱ��� �޷��� ����մϴ�."); 
	printf("\n\t�⵵�� �Է��ϸ� �ش� �⵵�� 1~12�� �޷��� ����մϴ�.");
	printf("\n\t�⵵/���� �Է��ϸ� ������ ���� �޷��� ����մϴ�."); 
	exit (0);
} 

int main(int argc, char** argv) 
{ 
	char *searchindexk = "/k", *ptr, *slash = "/"; 
	int day, i, frommonth = 1, tomonth = 12, year, lastyear, monthon = 0, flagkon = 0; 

	if (argc < 2 || argc > 3 ) UsageAndExit("���α׷� �ƱԸ�Ʈ ����!"); 
	
	for(i = 1; i < argc ; i++) 
	{ 
		if((strcmp(strlwr(argv[i]), searchindexk))==0) 
		{ ///k �ɼ� 
			flagkon = 1; 
		} 
		else 
		{ 
			ptr = strstr(argv[i], slash); 
			if(ptr == NULL) 
			{ //�⵵�� ���� 
				year = atoi(argv[i]); 
			} 
			else 
			{ //�⵵/�� ���� 
				*ptr = '\0'; 
				year = atoi(argv[i]); 
				frommonth = atoi(++ptr); 
				tomonth = frommonth; 
			} 
		} 
	} 
	
	if (year < 1 || frommonth < 1 || tomonth > 12) UsageAndExit("�⵵ �� �� �Է� ����!");
	
	//���� ó�� 
	if(year%4==0 && (year%100 != 0 || year%400 == 0)) limitday[2]=29; 
	
	//������ ���� ���� 
	lastyear = year - 1 ; day = (lastyear + (lastyear / 4) - (lastyear / 100) + (lastyear / 400) + 1) % 7; 
	
	//���� ���� ���ۿ��� 
	for( i = 1; i < frommonth; i++) day += limitday[i]; 
	day %= 7; 
	
	for(i = frommonth; i <= tomonth; i++) 
	{ 
		day = printmonth( year, i, day, flagkon ); 
	} 
	printf("\n"); 

	return 0; 
}

