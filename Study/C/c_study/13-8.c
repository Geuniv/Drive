#include <stdio.h>

void main()
{
	/* 0���� 6������ �������� */
	enum week { sun, mon, tue, wed, thu, fri, sat };
	enum week ww; /* ������ ���� ww�� ������ */
	ww = sat; /* ���� ww�� ���� ������ */

	/* ww�� sun(0)���� �ƴ����� ���ο� ���� ������ ����� */
	if (ww == sun)
		printf("������ �Ͽ����Դϴ�.\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�.\n");
}
