#include <stdio.h>

#define PI 3.1415926535 /* ����� PI�� ������ */
#define STR "���� ������ ����߽��ϴ�.\n" /* ���ڿ��� STR�� ������ */
#define END_MSG printf("���α׷��� ����Ǿ����ϴ�.\n\n") /* �Լ��� END_MSG�� ������ */

void main()
{
	/* ������ PI�� ����� */
	printf("�������� 10�� ���� ������ ==> %10.5f \n", 10 * 10 * PI);

	/* ������ STR�� ����� */
	printf(STR);

	/* ������ END_MSG�� ����� */
	END_MSG;
}
