#include <stdio.h>

void main() {

	int a;
	
	printf("년도를 입력하세요:");
	scanf("%d", &a);

	if (( a%4 == 0 ) && ( a%100 != 0 ) || ( a%400 == 0 ))
	{	
		printf("%d 년은 윤년입니다.", a);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.", a);
	}
}
