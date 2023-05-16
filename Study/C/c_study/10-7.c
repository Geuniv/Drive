#include <stdio.h>

/* void 형 함수이므로 반환값이 없음 */
void func1()
{
	printf("void 형 함수는 돌려줄게 없음.\n");
}

/* int 형 함수이므로 반환값이 있음 */
int func2()
{
	return 100;
}

void main()
{
	int a;

	/* void 형 함수를 호출 */
	func1();

	/* int 형 함수를 호출 */
	a = func2();
	printf("int 형 함수에서 돌려준 값 ==> %d\n", a);
}
