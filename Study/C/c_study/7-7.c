#include <stdio.h>

void main() {
	
	int i;

	for ( i = 1; i <= 100 ; i++ )
	{
		// ���� i��°�� �����.
		printf("for ���� %d ȸ �����߽��ϴ�. \n", i);
		break; // ������ for���� ��������
	}

	printf("for ���� �����߽��ϴ�. \n");
}
