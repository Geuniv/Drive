#include <stdio.h>

void main() {

	// 2���� �迭�� �ʱ�ȭ��
	int aa[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9,10,11,12 }
	};

	int i, k;
	printf("aa[0][0]���� aa[2][3]���� ��� \n");

	// 2���� �迭�� ����� ���� �����
	for ( i = 0; i < 3; i++ ) 
	{
		for ( k = 0; k < 4; k++ ) 
		{
			printf("%3d", aa[i][k]);
		}
		printf("\n");
	}
}
