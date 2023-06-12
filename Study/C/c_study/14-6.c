#include <stdio.h>

/* 함수의 프로토타입을 선언함 */
void myfunc();

void main()
{
	myfunc();
	myfunc(); /* myfunc() 함수를 두 번 호출함 */
}

void myfunc()
{
	/* static 예약어로 a 변수를 선언하고 초기화함 */
	static int a = 0;

	/* a를 100 증가시킨 후 출력함 */
	a = a + 100;
	printf("a의 값 ==> %d\n", a);
}
