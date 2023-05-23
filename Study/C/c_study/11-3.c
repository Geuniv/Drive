#include <stdio.h>

void main() 
{
	char ch;

	printf("문자열을 입력하세요 : ");
	ch = getchar(); /* 문자 1개를 입출력함 */
	putchar(ch); /* 버퍼에서 문자를 읽어 모니터에 출력함 */

	ch = getchar();
	putchar(ch);

	ch = getchar();
	putchar(ch);
}
