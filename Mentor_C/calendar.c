#include <stdio.h> 
#include <string.h> 

int limitday[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

// year, pmonth : 출력할 년도와 월 
// pday : 요일(0-일요일), flagkon : 0-영문, 1-한글 
int printmonth(int year, int pmonth, int pday, int flagkon) 
{ 
	int i; 
	char *monname[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }; 
	if (flagkon) 
		printf("\n %d년 %d월", year, pmonth); 
	else 
		printf("\n %d %s %d", pmonth, monname[pmonth], year); 
	printf("\n -------------%d %d-----------------------\n", year, pmonth); 
	
	if (flagkon) 
		printf(" 일 월 화 수 목 금 토 \n"); 
	else 
		printf(" SUN MON TUE WED THU FRI SAT \n"); 

	for( i = 0; i < pday; i++) printf(" "); 

	for( i = 1; i <= limitday[pmonth]; i++) 
	{ 
		printf("%5d", i );

		//토요일에 줄 구분 
		if( pday == 6 ) printf(" \n"); 

		pday = ++ pday % 7 ; 
	} 
	printf("\n"); 
	return(pday); 
} 

void UsageAndExit(char *msg) 
{ 
	if (msg != NULL) printf("\n%s", msg); 
	printf("\ncalendar 사용법 : calendar [/k] 년도[/월]"); 
	printf("\n\t지정한 년도 또는 년도/월에 해당하는 달력을 출력합니다."); 
	printf("\n\t/k\t한국어 달력을 출력합니다."); 
	printf("\n\t년도만 입력하면 해당 년도의 1~12월 달력을 출력합니다.");
	printf("\n\t년도/월을 입력하면 지정한 월의 달력을 출력합니다."); 
	exit (0);
} 

int main(int argc, char** argv) 
{ 
	char *searchindexk = "/k", *ptr, *slash = "/"; 
	int day, i, frommonth = 1, tomonth = 12, year, lastyear, monthon = 0, flagkon = 0; 

	if (argc < 2 || argc > 3 ) UsageAndExit("프로그램 아규먼트 오류!"); 
	
	for(i = 1; i < argc ; i++) 
	{ 
		if((strcmp(strlwr(argv[i]), searchindexk))==0) 
		{ ///k 옵션 
			flagkon = 1; 
		} 
		else 
		{ 
			ptr = strstr(argv[i], slash); 
			if(ptr == NULL) 
			{ //년도만 지정 
				year = atoi(argv[i]); 
			} 
			else 
			{ //년도/월 지정 
				*ptr = '\0'; 
				year = atoi(argv[i]); 
				frommonth = atoi(++ptr); 
				tomonth = frommonth; 
			} 
		} 
	} 
	
	if (year < 1 || frommonth < 1 || tomonth > 12) UsageAndExit("년도 및 월 입력 오류!");
	
	//윤년 처리 
	if(year%4==0 && (year%100 != 0 || year%400 == 0)) limitday[2]=29; 
	
	//올해의 시작 요일 
	lastyear = year - 1 ; day = (lastyear + (lastyear / 4) - (lastyear / 100) + (lastyear / 400) + 1) % 7; 
	
	//지정 월의 시작요일 
	for( i = 1; i < frommonth; i++) day += limitday[i]; 
	day %= 7; 
	
	for(i = frommonth; i <= tomonth; i++) 
	{ 
		day = printmonth( year, i, day, flagkon ); 
	} 
	printf("\n"); 

	return 0; 
}

