#include <stdio.h>

void main() {

	char s[8] = "Basic-C";
	char *p;
	int i;

	// 포인터 변수에 배열 주소를 대입함
	p = s;

	// 문자열 배열의 끝부터 배열의 개수만큼 반복함
	for ( i = sizeof(s)-2; i >= 0; i-- )
		// 포인터 변수가 가리키는 곳의 문자 하나를 출력함
		printf("%c", *(p+i) );

	printf("\n");
}
