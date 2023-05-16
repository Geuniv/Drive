#include <stdio.h>

/* 매개변수로 주소값 ( 포인터 ) 을 받음 */
void func1(int *a)
{
	/* a가 가리키는 곳의 실제값 + 1 을 수행함 */
	*a = *a + 1;
	printf("전달받은 a ==> %d\n", *a);
}

void main()
{
	int a = 10;

	/* 함수를 호출 할 때 a의 주소를 전달함 */
	func1(&a);
	/* 함수를 호출한 후 a값을 출력함 */
	printf("func1() 실행 후의 a ==> %d\n", a);
}
