#include <stdio.h>

void main() {
	
	int aa[4] = {100, 200, 300, 400};
	int bb[] = {100, 200, 300, 400};
	int cc[4] = {100, 200};
	int dd[4] = {0};
	int ee[4]; // 쓰레기 값을 보기 위한 배열
	int i;

	for ( i = 0; i <= 3; i++)
		printf("aa[%d]==>%d\t", i, aa[i]);
	printf("\n");
	
	for ( i = 0; i <= 3; i++)
		printf("bb[%d]==>%d\t", i, bb[i]);
	printf("\n");
	
	for ( i = 0; i <= 3; i++)
		printf("cc[%d]==>%d\t", i, cc[i]);
	printf("\n");
	
	for ( i = 0; i <= 3; i++)
		printf("dd[%d]==>%d\t", i, dd[i]);
	printf("\n");
	
	for ( i = 0; i <= 3; i++)
		printf("ee[%d]==>%d\t", i, ee[i]);
	printf("\n");
}
