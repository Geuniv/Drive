#include <stdio.h>

void main() {

	// ������ ������ ���� p�� q�� ������
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch; // ch�� �ּҰ��� p�� ������

	q = p; // p�� ���� q�� ������

	*q = 'Z'; // Q�� ����Ű�� ���� ���� ���� ������

	printf("ch�� ������ �ִ� �� : ch ==> %c \n\n", ch);
}