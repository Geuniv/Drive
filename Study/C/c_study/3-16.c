#include <stdio.h>

void main()
{
	int a;

	printf("입력진수 결정 <1>10 <2>16 <3> 8 : ");
	scanf("%d", &a);

	printf("10진수 ==> %d \n", a);
	printf("16진수 ==> %x \n", a);
	printf("8진수 ==> %o \n", a);
}
