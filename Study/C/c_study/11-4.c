#include <stdio.h>

void main()
{
	char s[20];
	FILE *rfp; /* 파일 포인터를 선언함 */

	rfp = fopen("c:\\c_study\\data1.txt", "r");

	/* 파일 읽기(r) 모드로 열고 폴더와 파일의 경로는 '\\'를 2개씩 써야 함 */
	fgets(s, 20, rfp);

	printf("파일에서 읽은 문자열 : ");
	puts(s); /* 모니터에 문자열을 출력함 */

	fclose(rfp);
}
