#include <stdio.h>

void main()
{
	FILE *wfp;
	int hap=0;
	int in, i;

	wfp = fopen("c:\\c_study\\data6.txt", "w");

	/* 5ȸ �ݺ��ϸ鼭 Ű���忡�� �Է� ���� ������ �հ踦 ������ */
	for (i = 0; i < 5; i++)
	{
		printf(" ���� %d : ", i+1);
			scanf("%d", &in);
			hap = hap + in;
	}

	/* �հ踦 ���Ͽ� �� */
	fprintf(wfp, "�հ� ==> : %d\n", hap);

	fclose(wfp);
}
