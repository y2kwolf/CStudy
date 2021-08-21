#include <stdio.h>

int main(void)
{
	//int myArr[3] = {1,2,3};
	//printf("배열 각 요소의 주소 확인\n");
	//printf("배열의 이름: %p\n", myArr);
	//printf("첫번째 요소: %p\n", &myArr[0]);
	//printf("두번째 요소: %p\n", &myArr[1]);
	//printf("세번째 요소: %p\n", &myArr[2]);

	short sarr[3] = { 1, 2, 3 };
	int iarr[3] = { 10, 20, 30 };

	// 인덱스 번호를 통한 접근
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	// 포인터 연산을 통한 접근
	printf("%d %d %d\n", *sarr, *(sarr+1), *(sarr+2));
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	// 주소확인
	printf("%p %p %p\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%p %p %p\n", &iarr[0], &iarr[1], &iarr[2]);


	return 0;
}
