#include <stdio.h>
#include <malloc.h>

void main()
{
	/* ������ �����͸� ������ */
	int *p, *s;
	int i, j;

	/* malloc() �Լ��� ������ �޸� 3���� �Ҵ��� */
	printf("malloc() �Լ� ���\n");
	p = (int*) malloc(sizeof(int) * 3);

	/* ������ ���� p�� ����Ű�� ���� �������� ����� */
	for(i = 0; i < 3; i++)
		printf("�Ҵ�� ���� �ʱⰪ p[%d] ==> %d\n", i, p[i]);

	free(p);

	/* calloc() �Լ��� ������ �޸� 3���� �Ҵ��� */
	printf("\ncalloc() �Լ� ���\n");
	s = (int*) calloc(sizeof(int), 3);

	/* ������ ���� s�� ����Ű�� ���� �������� ����� */
	for(j = 0; j < 3; j++)
		printf("�Ҵ�� ���� �ʱⰪ s[%d] ==> %d\n", j, s[j]);

	free(s);
}
