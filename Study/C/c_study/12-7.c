#include <stdio.h>
#include <malloc.h>
#include <string.h>
/* �޸� ���� �Լ��� ���ڿ� ���� �Լ��� ����ϱ� ���� �ʿ��� */

void main()
{
	/* �� ĭ�� ������ �迭�� ������ */
	char* p[3];
	char imsi[100];	/* �Է°��� ������ �ӽ� ���� �迭�� */
	int i, size;

	for(i = 0; i < 3; i++)
	{
		printf(" %d ��° ���ڿ� : ", i+1);
		gets(imsi);	/* �ӽ� ������ ���ڿ��� �Է��� */

		size = strlen(imsi);
		/* �Է��� ���� + 1 ũ���� �޸𸮸� Ȯ���� */
		p[i] = (char*) malloc( (sizeof(char) * size) + 1);

		/* �Է��� ���ڿ��� ������ �޸𸮸� Ȯ���� ������ ������ */
		strcpy(p[i], imsi);
	}

	printf("\n -- �Է°� �ݴ�� ��� (������) --\n");

	/* ������ �迭�� ����� ���ڿ��� ����� */
	for(i = 2; i >= 0; i--)
	{
		printf(" %d :%s\n", i+1, p[i]);
	}

	/* �Ҵ��ߴ� �޸� 3���� �ü���� �ݳ��� */
	for (i = 0; i < 3; i++)
		free(p[i]);
}