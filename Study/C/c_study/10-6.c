#include <stdio.h>

/* 전역 변수 a를 선언하고 초기값을 대입함 */
int a = 100;

void func1()
{
	/* 지역 변수 a를 선언하고 초기값을 대입홤 */
	int a = 200;
	/* 지역 변수를 출력함 */
	printf("func1() 에서 a의 값 ==> %d\n", a);
}

void main()
{
	func1();
	/* 전역 변수를 출력함 */
	printf("main() 에서 a의 값 ==> %d\n", a);
}
