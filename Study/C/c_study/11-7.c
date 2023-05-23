#include <stdio.h>

void main()
{
	/* vim 에디터에서 입력하여 지정 경로에 저장하는 예제 */

	char s[20];
	FILE *wfp;

	wfp = fopen("c:\\c_study\\data3.txt", "w");

	printf("문자열을 입력(최대 19자) : ");
	gets(s);

	fputs(s, wfp);

	fclose(wfp);
}
