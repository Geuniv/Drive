#include <stdio.h>

/* �Ű����� 3���� �޾Ƽ� ����ϴ� �Լ� */
int calc(int v1, int v2, int op)
{
	int result;

	/* �Ű����� ���� ���� '1:����, 2:����, 3:����, 4:������'�� ������ */
	switch (op)
	{
		case 1 : result = v1 + v2; break;
		case 2 : result = v1 - v2; break;
		case 3 : result = v1 * v2; break;
		case 4 : result = v1 / v2; break;
	}

	/* ��� ����� ��ȯ�� */
	return result;
}

void main() {

	int res;
	int oper, a, b;

	/* �����ڸ� �Է��� */
	printf("��� �Է� (1:+, 2:-, 3:*, 4:/) : ");
	scanf("%d", &oper);

	/* ����� �� ���ڸ� �Է��� */
	printf("����� �� ���ڸ� �Է� : ");
	scanf("%d %d", &a, &b);

	/* �Ű����� 3���� �ְ� calc() �Լ��� ȣ����. ��� ����� res�� ���� */
	res = calc(a, b, oper);

	printf("��� ����� : %d\n", res);
}
