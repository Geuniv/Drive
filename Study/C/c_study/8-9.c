#include <string.h> // ���ڿ� �Լ��� ����� �ִ� string.h�� ������
#include <stdio.h>

void main() {

	char ss[] = "XYZ";
	int len;

	len = strlen(ss); // ���ڿ� �迭 ss�� ���̸� ���� ( �� ���� ���� )

	// ū����ǥ�� ������ ����ϱ� ���� \" ���ڸ� �����
	printf("���ڿ� \"%s\"�� ���� ==> %d \n", ss, len);
}