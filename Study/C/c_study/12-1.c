#include <stdio.h>

void main()
{
	int aa[3]; /* ������ �迭�� ������ */
	int *p; /* ������ ������ ������ ������ */
	int i, hap=0;

	/* �迭�� ���� 3���� �Է��� */
	for(i = 0; i < 3; i++)
	{
		printf(" %d ��° ���� : ", i+1);
		scanf("%d", &aa[i]);
	}

	/* ������ ������ �迭 aa�� �ּҸ� ������ */
	p = aa;

	/* aa[0] ~ aa[2]�� �հ踦 ���� */
	for(i = 0; i < 3; i++)
		hap = hap + *(p+i);

	printf("�Է� ������ �� => %d\n", hap);
}