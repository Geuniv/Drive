#include <stdio.h>

void main() {
	
	int a, b;

	while ( 1 )
	{
		printf("���� �� �� �Է� (���߷��� 0�� �Է�) : ");
		scanf("%d %d", &a, &b); // 2���� ���� �Է� ����

		if ( a == 0 )
			  break; // ù ��° �Է°��� 0�̸� ������ while���� ���� ����

		printf("%d + %d = %d \n", a, b, a+b);
	}

	printf("0�� �Է��ؼ� for ���� Ż���߽��ϴ�. \n");
}
