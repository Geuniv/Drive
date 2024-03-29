#include <stdio.h>

void main() {
	
	int a, b;
	char ch;

	// while문의 조건을 1로 두고 무한루프로 실행
	while ( 1 )
	{
		printf("계산할 두 수를 입력 (멈추려면 Ctrl+C) : ");
		scanf("%d %d", &a, &b);

		printf("계산할 연산자를 입력하세요. : ");
		scanf(" %c", &ch);

		// 받는 연산자의 종류에 따라 결과가 달라지게 switch ~ case문을 사용
		switch ( ch )
		{
		case '+' :
			printf("%d + %d = %d 입니다. \n", a, b, a+b);
			break;
		case '-' :
			printf("%d - %d = %d 입니다. \n", a, b, a-b);
			break;
		case '*' :
			printf("%d * %d = %d 입니다. \n", a, b, a*b);
			break;
		case '/' :
			printf("%d / %d = %f 입니다. \n", a, b, a/(float)b);
			break;
		case '%' :
			printf("%d %% %d = %d 입니다. \n", a, b, a%b);
			break;
		default :
			printf("연산자를 잘못 입력했습니다. \n");
		}
	}
}
