#include <stdio.h>
#include <string.h>

void main()
{
	/* ����ü���� ������ */
	struct student {
	char name[10];
	int kor;
	int eng;
	float avg;
	}

	/* ����ü�� �迭 s[3]�� ������ */
	struct student s[3];

	int i;

	/* ù ��° �л��� ������ ������ */
	strcpy(s[0], name, "Kim");
	s[0].kor = 90;
	s[0].eng = 80;
	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;
	
	/* �� ��° �л��� ������ ������ */
	strcpy(s[1], name, "Lee");
	s[1].kor = 70;
	s[1].eng = 60;
	s[1].avg = (s[1].kor + s[1].eng) / 2.0f;
	
	/* �� ��° �л��� ������ ������ */
	strcpy(s[2], name, "Park");
	s[2].kor = 50;
	s[2].eng = 40;
	s[2].avg = (s[2].kor + s[2].eng) / 2.0f;

	/* �� �� �ݺ��ؼ� �迭�� ������ ����� */
	printf("-- ����ü �迭 -- \n");
	for (i=0; i<3; i++)
	{
		printf("�л� �̸� ==> %s\n", s[i].name);
		printf("���� ����   ==> %d\n", s[i].kor);
		printf("���� ����   ==> %d\n", s[i].eng);
		printf("��� ����   ==> %5.1f\n", s[i].avg);
	printf("\n");
	}
}