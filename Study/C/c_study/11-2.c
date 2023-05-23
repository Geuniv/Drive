#include <stdio.h>

void main() 
{
	char s[20];

	printf("문자열을 입력 : ");
	gets(s); /* 문자열을 입력. 최대 19까지 입력할 수 있음 */

	puts(s); /* 문자열을 출력 */
}
