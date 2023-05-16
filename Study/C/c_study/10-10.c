#include <stdio.h>

/* 매개변수가 값인 함수 */
void func1(char a, char b)
{
	int imsi;

	/* 두 문자를 교환함 */
	imsi = a;
	a = b;
	b = imsi;
}

/* 매개변수가 주소인 함수 */
void func2 (char *a, char *b)
{
	int imsi;

	/* 두 문자를 교환함 */
	imsi = *a;
	*a = *b;
	*b = imsi;
}

void main()
{
	char x = 'A', y = 'Z';
	/* 원래 문자를 출력함 */
	printf("원래 값          : x=%c, y=%c\n", x, y);

	/* 값을 전달해서 func1() 함수를 호출함 */
	func1(x, y);
	printf("값을 전달한 후   : x=%c, y=%c\n", x, y);
	
	/* 주소를 전달해서 func2() 함수를 호출함 */
	func2(&x, &y);
	printf("주소를 전달한 후 : x=%c, y=%c\n", x, y);
}
