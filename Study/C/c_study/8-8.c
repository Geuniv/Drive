#include <stdio.h>

void main() {

	char ss[5] = "abcd";
	char tt[5];
	int i;

	for ( i = 0; i < 4; i++ ) { //4ȸ �ݺ��ؼ� �� �迭�� ���ڸ� �ݴ� ������ ������
		tt[i] = ss[3-i];
	}
	tt[4] = '\0'; // �������� �� ���ڸ� ������

	printf("�Ųٷ� ����� ��� ==> %s \n", tt);
}
