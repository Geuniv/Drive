#include <stdio.h>

void main()
{
	char data[3][100];	/* 3행 100열의 2차원 배열을 선언함 */
	int i;

	/* 각 행에 최대 99자의 문자열을 입력함 */
	for (i = 0; i < 3; i++)
	{
		printf(" %d 번째 문자열 : ", i+1);
		gets(data[i]);
	}

	printf("\n -- 입력과 반대로 출력(이차원 배열) --\n");

	/* 2행, 1행, 0행의 순서로 마지막 행부터 출력함 */
	for (i = 2; i >= 0; i--)
	{
		printf(" %d :%s\n", i+1, data[i]);
	}
}
