#include <stdio.h>

void main()
{
	char str[200];
	FILE *rfp; /* ���� �����͸� ������ */

	/* �о�� ������ ���� */
	rfp = fopen("c:\\windows\\win.ini", "r");

	for ( ;; ) /* ���� ���� */
	{
		fgets(str, 200, rfp); /* ���Ͽ� �� �پ� �о�� */

		if (feof(rfp)) /* ���Ͽ� �� �پ� �о�� */
			break;

		printf("%s", str); /* ���Ͽ��� ���� ������ ����� */
	}
	fclose(rfp); /* ������ ���� */
}
