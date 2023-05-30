#include <stdio.h>

void main() 
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	rfp = fopen("c:\\windows\\win.ini", "r");
	wfp = fopen("c:\\c_study\\data5.txt", "w");

	for( ;; )
	{
		/* 읽기용 파일에서 한 줄을 읽음. 최대 199자까지 읽을 수 있음 */
		fgets (str, 200, rfp);

		/* 읽기용 파일의 끝을 만나 for 문을 바져 나감 */
		if (feof(rfp))
			break;

		/* 쓰기용 파일에 한 줄을 씀 */
		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
