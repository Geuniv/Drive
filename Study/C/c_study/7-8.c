#include <stdio.h>

void main() {
	
	int a, b;

	while ( 1 )
	{
		printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
		scanf("%d %d", &a, &b); // 2개의 수를 입력 받음

		if ( a == 0 )
			  break; // 첫 번째 입력값이 0이면 무조건 while문을 빠져 나감

		printf("%d + %d = %d \n", a, b, a+b);
	}

	printf("0을 입력해서 for 문을 탈출했습니다. \n");
}
