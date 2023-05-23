#include <stdio.h>

void main() 
{
	int a;
	float b;
	char ch;
	char s[20];

	printf("정수를 입력 : ");  /* 정수를 입력 */
	scanf("%d", &a);
	printf("실수를 입력 : "); /* 실수를 입력 */
	scanf("%f", &b);
	printf("문자를 입력 : "); /* 문자를 입력. 13행의 Enter를 무시하기 위해 %c 앞에 공백이 필요함 */
	scanf(" %c", &ch);
	printf("문자열을 입력 : "); /* 문자열을 입력. 배열 이름 s는 그 자체가 주소이므로 &를 사용하지 않음 */
	scanf("%s", s);

	printf("\n정수의 10진수 ==> %d\n", a); /* 정수를 10진수, 16진수, 8진수로 출력 */
	printf("정수의 16진수 ==> %x\n", a);
	printf("정수의 8진수 ==> %o\n", a);
	printf("실수 ==> %10.3f\n", b); /* 실수를 일반 방식 및 공학용으로 출력 */
	printf("실수(공학용) ==> %e\n", b);
	printf("문자 ==> %c\n", ch); /* 문자 및 문자열로 출력 */
	printf("문자열 ==> %s\n", s);
}
