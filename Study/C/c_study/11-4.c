#include <stdio.h>

void main()
{
	char s[20];
	FILE *rfp; /* ���� �����͸� ������ */

	rfp = fopen("c:\\c_study\\data1.txt", "r");

	/* ���� �б�(r) ���� ���� ������ ������ ��δ� '\\'�� 2���� ��� �� */
	fgets(s, 20, rfp);

	printf("���Ͽ��� ���� ���ڿ� : ");
	puts(s); /* ����Ϳ� ���ڿ��� ����� */

	fclose(rfp);
}
