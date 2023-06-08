#include <stdio.h>

int main()
{
	/* 학생 이름, 국어 점수, 영어 점수, 평균 점수 변수를 선언함 */
	char name[10];
	int kor;
	int eng;
	float avg;

	/* 학생 이름을 입력함. 최댛 9자를 입력할 수 있음 */
	printf("이름 : ");
	scanf("%s", name, 9);

	/* 국어 점수를 입력함 */
	printf("국어 점수 : ");
	scanf("%d", &kor);

	/* 영어 점수를 입력함 */
	printf("영어 점수 : ");
	scanf("%d", &eng);

	/* 평균 점수를 계산함 */
	avg = (kor + eng) / 2.0f;

	printf("\n");
	printf("학생 이름 ==> %s\n", name);
	printf("국어 점수 ==> %d\n", kor);
	printf("영어 점수 ==> %d\n", eng);
	printf("평균 점수 ==> %5.1f\n", avg);
}
