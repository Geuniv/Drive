#include <stdio.h>
#include <string.h>

void main() 
{
	/* ����ü�� bibim�� ������. ���� ���� ������ ���� */
	struct bibim {
		int a;
		float b;
		char c;
		char d[5];
	};

	/* ����ü b1�� ������. ���� ���� ������ Ȯ���� */
	struct bibim b1;

	/* ����ü ������ ��� ������ ���� ������ */
	b1.a = 10;
	b1.b = 1.1f;
	b1.c = 'A';
	strcpy(b1.d, "ABCD");

	/* ����ü ������ ��� �������� ����� */
	printf(" b1.a ==> %d \n", b1.a);
	printf(" b1.b ==> %f \n", b1.b);
	printf(" b1.c ==> %c \n", b1.c);
	printf(" b1.d ==> %s \n", b1.d);
}
