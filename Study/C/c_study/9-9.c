#include <stdio.h>

void main() {

	char s[8] = "Basic-C";
	char *p;
	int i;

	// ������ ������ �迭 �ּҸ� ������
	p = s;

	// ���ڿ� �迭�� ������ �迭�� ������ŭ �ݺ���
	for ( i = sizeof(s)-2; i >= 0; i-- )
		// ������ ������ ����Ű�� ���� ���� �ϳ��� �����
		printf("%c", *(p+i) );

	printf("\n");
}
