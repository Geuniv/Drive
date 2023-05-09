#include <stdio.h>

void main() {

	// 문자형 변수와 포인터 변수를 선언함
	char ch;
	char* p;

	// 문자 'A'를 ch에 대입하고 ch의 주소를 p에 대입함
	ch = 'A';
	p = &ch;

	printf("ch가 가지고 있는 값 : ch ==> %c \n", ch);
	printf("ch의 주소(address) : &ch ==> %d \n", &ch);
	printf("p가 가지고 있는 값 : p ==> %d \n", p);
	printf("p가 가리키는 곳의 실제값 : p ==> %c \n", *p);
}
