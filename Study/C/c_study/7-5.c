#include <stdio.h>

void main() {
	
	int a = 100;

	// ���ǽ��� ���� �Ǵ��ϹǷ� while�� ���ΰ� ������� ����
	while ( a == 200 )
	{
		printf("while �� ���ο� ��� �Խ��ϴ�. \n");
	}

	// ���� ������ ������ �� ���ǽ��� �Ǵ��ϹǷ� do ~ while�� ���ΰ� �����
	do {
		printf("do ~ while�� ���ο� ��� �Խ��ϴ�. \n");
	} while ( a == 200 );
}
