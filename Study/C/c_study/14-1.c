#include <stdio.h>

/* �Ű� ������ ������ */
void main(int argc, char* argv[])
{
	int i;

	/* �Ű� ������ ������ ����� */
	printf(" argc �Ű����� ==> %d \n", argc);

	/* �Ű� ������ ������ŭ �ݺ��Ͽ� �Ű������� ������ ����� */
	for (i=0; i<argc; i++)
		printf(" argv[%d] �Ű����� ==> %s \n", i, argv[i]);
}
