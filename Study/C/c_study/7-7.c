#include <stdio.h>

void main() {
	
	int i;

	for ( i = 1; i <= 100 ; i++ )
	{
		// 변수 i번째를 출력함.
		printf("for 문을 %d 회 실행했습니다. \n", i);
		break; // 무조건 for문을 빠져나감
	}

	printf("for 문을 종료했습니다. \n");
}
