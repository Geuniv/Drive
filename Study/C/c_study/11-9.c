#include <stdio.h>

void main()
{
	FILE *wfp;
	int hap=0;
	int in, i;

	wfp = fopen("c:\\c_study\\data6.txt", "w");

	/* 5회 반복하면서 키보드에서 입력 받은 숫자의 합계를 누적함 */
	for (i = 0; i < 5; i++)
	{
		printf(" 숫자 %d : ", i+1);
			scanf("%d", &in);
			hap = hap + in;
	}

	/* 합계를 파일에 씀 */
	fprintf(wfp, "합계 ==> : %d\n", hap);

	fclose(wfp);
}
