#include <stdio.h>

/* void �� �Լ��̹Ƿ� ��ȯ���� ���� */
void func1()
{
	printf("void �� �Լ��� �����ٰ� ����.\n");
}

/* int �� �Լ��̹Ƿ� ��ȯ���� ���� */
int func2()
{
	return 100;
}

void main()
{
	int a;

	/* void �� �Լ��� ȣ�� */
	func1();

	/* int �� �Լ��� ȣ�� */
	a = func2();
	printf("int �� �Լ����� ������ �� ==> %d\n", a);
}
