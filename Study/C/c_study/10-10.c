#include <stdio.h>

/* �Ű������� ���� �Լ� */
void func1(char a, char b)
{
	int imsi;

	/* �� ���ڸ� ��ȯ�� */
	imsi = a;
	a = b;
	b = imsi;
}

/* �Ű������� �ּ��� �Լ� */
void func2 (char *a, char *b)
{
	int imsi;

	/* �� ���ڸ� ��ȯ�� */
	imsi = *a;
	*a = *b;
	*b = imsi;
}

void main()
{
	char x = 'A', y = 'Z';
	/* ���� ���ڸ� ����� */
	printf("���� ��          : x=%c, y=%c\n", x, y);

	/* ���� �����ؼ� func1() �Լ��� ȣ���� */
	func1(x, y);
	printf("���� ������ ��   : x=%c, y=%c\n", x, y);
	
	/* �ּҸ� �����ؼ� func2() �Լ��� ȣ���� */
	func2(&x, &y);
	printf("�ּҸ� ������ �� : x=%c, y=%c\n", x, y);
}
