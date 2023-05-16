#include <stdio.h>

void func1(int a)
{
	a = a + 1; /* 전달 받은 a 값을 1 증가시킨 후 출력함 */
	printf("전달받은 a ==> %d\n", a);
}

void main()
{
	int a = 10;

	/* a 값을 매개변수로 넘겨 함수를 호출함 */
	func1(a);
	printf("func1() 실행 후의 a ==> %d\n", a);
	/* 함수를 호출한 후 a 값을 출력함 */
}
