#include <stdio.h>

void func1(int a)
{
	a = a + 1; /* ���� ���� a ���� 1 ������Ų �� ����� */
	printf("���޹��� a ==> %d\n", a);
}

void main()
{
	int a = 10;

	/* a ���� �Ű������� �Ѱ� �Լ��� ȣ���� */
	func1(a);
	printf("func1() ���� ���� a ==> %d\n", a);
	/* �Լ��� ȣ���� �� a ���� ����� */
}
