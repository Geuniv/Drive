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
		/* �б�� ���Ͽ��� �� ���� ����. �ִ� 199�ڱ��� ���� �� ���� */
		fgets (str, 200, rfp);

		/* �б�� ������ ���� ���� for ���� ���� ���� */
		if (feof(rfp))
			break;

		/* ����� ���Ͽ� �� ���� �� */
		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
