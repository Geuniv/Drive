#include <stdio.h>
#include <string.h>

void main() 
{
	/* 구조체형 bibim을 선언함. 아직 저장 공간이 없음 */
	struct bibim {
		int a;
		float b;
		char c;
		char d[5];
	};

	/* 구조체 b1을 선언함. 실제 저장 공간을 확보함 */
	struct bibim b1;

	/* 구조체 변수의 멤버 변수에 값을 대입함 */
	b1.a = 10;
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy(b1.d, "ABCD");

	/* 구조체 변수의 멤버 변수값을 출력함 */
	printf(" b1.a ==> %d \n", b1.a);
	printf(" b1.b ==> %f \n", b1.b);
	printf(" b1.c ==> %c \n", b1.c);
	printf(" b1.d ==> %s \n", b1.d);
}
