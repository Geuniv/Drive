#include <stdio.h>

/* �Լ��� ������Ÿ���� ������ */
void myfunc();

void main()
{
	myfunc();
	myfunc(); /* myfunc() �Լ��� �� �� ȣ���� */
}

void myfunc()
{
	/* static ������ a ������ �����ϰ� �ʱ�ȭ�� */
	static int a = 0;

	/* a�� 100 ������Ų �� ����� */
	a = a + 100;
	printf("a�� �� ==> %d\n", a);
}
