#include <string.h>
#include <stdio.h>

void main() {

	char ss[20];
	char tt[20];
	int r1, r2;

	puts("ù��° ���ڿ��� �Է��ϼ���.");
	gets(ss); // �迭 ss�� ���ڿ� �Է�
	
	puts("�ι�° ���ڿ��� �Է��ϼ���.");
	gets(tt); // �迭 tt�� ���ڿ� �Է�

	// �迭 ss�� tt�� ���ڿ� ���̸� ����
	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("ù��° ���ڿ��� ���� ==> %d \n", r1);
	printf("�ι�° ���ڿ��� ���� ==> %d \n", r2);

	// ss�� tt�� ���ڿ��� ������ ����
	if( strcmp(ss, tt) ==0 )
		puts("�� ���ڿ��� ������ �����ϴ�. \n");
	else
		puts("�� ���ڿ��� ������ �ٸ��ϴ�. \n");
}
