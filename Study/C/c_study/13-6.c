#include <stdio.h>

void main()
{
	/* ����ü���� ������ �� ��� ������ ������ */
	struct student {
	char name[10];
	int kor;
	int eng;
	float avg;
	};

	/* ����ü ���� s�� ������ */
	/* ����ü ������ ���� p�� ������ */
	struct student s;
	struct student *p;

	/* ������ ���� p�� s�� �ּҸ� ������ */
	p = &s;

	/* �̸��� �Է��� */
	printf("�̸� �Է� : ");
	scanf("%s", p->name);

	/* ���� ������ �Է��� */
	printf("���� ���� : ");
	scanf("%d", &p->kor);

	/* ���� ������ �Է��� */
	printf("���� ���� : ");
	scanf("%d", &p->eng);

	/* ��� ������ ����� */
	p -> avg = (p->kor + p->eng) / 2.0f;

	/* �л� �̸�, ���� ����, ���� ����, ��� ������ ����� */
	printf("\n--- ����ü ������ Ȱ�� ---\n");
	printf("�л� �̸� ==> %s\n", p->name);
	printf("���� ����   ==> %d\n", p->kor);
	printf("���� ����   ==> %d\n", p->eng);
	printf("��� ����   ==> %5.1f\n", p->avg);

}
