#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;

	/* �Ű� ������ �ϳ��� �ƴϸ� �޽����� ����� �� ���α׷��� ������ */
	if ( argc != 2 )
	{
		printf("\n -- �Ű������� 1�� ����ϼ��� -- \n");
		return;
	}

	/* ù ��° �Ű������� �Ѿ�� ���� �б� ���� �� */
	rfp = fopen(argv[1], "r");

	for( ;; )
	{
		/* ������ ������ �� �� �о� ���� */
		fgets(str, 199, rfp);

		/* ������ ���̸� ���� ������ ������ */
		if (feof(rfp))
			break;

		/* ���� ������ ����� */
		printf("%s", str);
	}
	fclose(rfp);
}
