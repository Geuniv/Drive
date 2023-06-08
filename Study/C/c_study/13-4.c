#include <stdio.h>
#include <string.h>

void main()
{
	/* 학생 이름, 국어 점수, 영어 점수, 평균 점수 배열을 선언함 */
	char name[3][10];
	int kor[3];
	int eng[3];
	float avg[3];

	int i;

	/* 첫 번째 학생의 정보를 입력함 */
	strcpy(name[0], "Kim");
	kor[0] = 90;
	eng[0] = 80;
	avg[0] = (kor[0] + eng[0]) / 2.0f;

	/* 두 번째 학생의 정보를 입력함 */
	strcpy(name[1], "Lee");
	kor[1] = 70;
	eng[1] = 60;
	avg[1] = (kor[1] + eng[1]) / 2.0f;

	/* 세 번째 학생의 정보를 입력함 */
	strcpy(name[2], "Park");
	kor[2] = 50;
	eng[2] = 40;
	avg[2] = (kor[2] + eng[2]) / 2.0f;

	/* 세 번 반복해서 배열의 내용을 출력함 */
	for (i=0; i<3; i++)
	{
		printf("학생 이름 ==> %s\n", name[i]);
		printf("국어 점수 ==> %d\n", kor[i]);
		printf("영어 점수 ==> %d\n", eng[i]);
		printf("평균 점수 ==> %5.1f\n", avg[i]);
		printf("\n");
	}
}
