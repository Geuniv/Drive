#include <stdio.h>

void main()
{
	/* ����ü�� student�� ������ */
	union student {
		int tot;
		char grade;
	};

	/* ����ü ���� u�� ������ */
	union student u;

	/* ����ü ������ ��� ������ ���� ������ */
	u.tot = 300;
	u.grade = 'A';

	/* ����ü ������ ��� �������� ����� */
	printf("\n--- ����ü Ȱ�� ---\n");
	printf("���� ==> %d\n", u.tot);
	printf("��� ==> %c\n", u.grade);
}
