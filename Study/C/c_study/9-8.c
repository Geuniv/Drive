#include <stdio.h>

void main() {

	char s[8] = "Basic-C"; // 문자형 배열을 선언하고 초기값을 대입함
	char *p; // 문자형 포인터 변수를 선언함

	// p에 배열 s의 주소를 대입함
	p = s;

	// 문자열과 포인터의 주소값을 %s로 출력함
	printf("&s[3] ==> %s\n", &s[3]);
	printf("p+3   ==> %s\n\n", p+3);

	// 문자열과 포인터의 실제값을 %c로 출력함
	printf("s[3]  ==> %c\n", s[3]);
	printf("*(p+3)==> %c\n", *(p+3));
}
