#include <stdio.h>
#include <malloc.h>	/* �޸� ���� �Լ��� ����� �� mallo.h�� �߰��� */

void main()
{
	int *p;	/* ������ �����͸� ������ */
	int i, hap = 0;
	int cnt;

	/* �Է��� ������ ������ �Է��� */
	printf(" �Է��� ������ ? ");
	scanf("%d", &cnt);

	/* �Է��� ������ŭ �޸𸮸� Ȯ���� */
	p = (int*) malloc(sizeof(int) * cnt);

	/* ������ Ȯ���� ������ ���� p�� ���� ���ڸ� �Է���. �迭ó�� &p[i]�� �Է��ص� �� */
	for(i = 0; i < cnt; i++)
	{
		printf(" %d ��° ���� : ", i+1);
		scanf("%d", p+i);
	}

	/* �޸��� �������� �հ迡 ������. �迭ó�� p[i]��� �Է��ص� �� */
	for(i = 0; i < cnt; i++)
		hap = hap + *(p+i);

	printf("�Է� ���� �� ==> %d\n", hap);

	/* �޸𸮸� ������ */
	free(p);
}
