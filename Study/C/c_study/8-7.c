#include <stdio.h>

void main() {
	
	char ss[8] = "Basic-C"; // ũ�Ⱑ 8�� ������ �迭�� �����ϰ� �ʱ�ȭ��
	int i;

	ss[5] = '#'; // ���� ��° ���ڸ� �ٲ�

	for ( i = 0; i < 8; i++ ) 
	{
		printf("ss[%d] ==> %c \n", i, ss[i]);
		// ���� �� �ݺ��ϸ鼭 �迭 ss�� �� ���ڸ� �����
	}

	printf("���ڿ� �迭 ss ==> %s \n", ss);
	// �迭 ss�� ��ü ���ڿ��� �����
}
