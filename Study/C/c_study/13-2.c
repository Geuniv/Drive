#include <stdio.h>

int main()
{
	/* �л� �̸�, ���� ����, ���� ����, ��� ���� ������ ������ */
	char name[10];
	int kor;
	int eng;
	float avg;

	/* �л� �̸��� �Է���. �ֈ� 9�ڸ� �Է��� �� ���� */
	printf("�̸� : ");
	scanf("%s", name, 9);

	/* ���� ������ �Է��� */
	printf("���� ���� : ");
	scanf("%d", &kor);

	/* ���� ������ �Է��� */
	printf("���� ���� : ");
	scanf("%d", &eng);

	/* ��� ������ ����� */
	avg = (kor + eng) / 2.0f;

	printf("\n");
	printf("�л� �̸� ==> %s\n", name);
	printf("���� ���� ==> %d\n", kor);
	printf("���� ���� ==> %d\n", eng);
	printf("��� ���� ==> %5.1f\n", avg);
}