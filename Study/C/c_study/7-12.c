#include <stdio.h>

void main() {
	
	int hap = 0;
	int i;

	for ( i = 1; i <= 100; i++ )
		hap += i;

	printf("1부터 100까지의 합은 %d 입니다. \n", hap);
	// 현재 함수를 호출한 곳으로 되돌림
	return;

	// 한 번도 실행되지 않음
	printf("프로그램의 끝입니다.");
}
