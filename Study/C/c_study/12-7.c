#include <stdio.h>
#include <malloc.h>
#include <string.h>
/* 메모리 관련 함수와 문자열 관련 함수를 사용하기 위해 필요함 */

void main()
{
	/* 세 칸의 포인터 배열을 선언함 */
	char* p[3];
	char imsi[100];	/* 입력값을 저장할 임시 공간 배열임 */
	int i, size;

	for(i = 0; i < 3; i++)
	{
		printf(" %d 번째 문자열 : ", i+1);
		gets(imsi);	/* 임시 공간에 문자열을 입력함 */

		size = strlen(imsi);
		/* 입력한 길이 + 1 크기의 메모리를 확보함 */
		p[i] = (char*) malloc( (sizeof(char) * size) + 1);

		/* 입력한 문자열의 내용을 메모리를 확보한 공간에 복사함 */
		strcpy(p[i], imsi);
	}

	printf("\n -- 입력과 반대로 출력 (포인터) --\n");

	/* 포인터 배열에 저장된 문자열을 출력함 */
	for(i = 2; i >= 0; i--)
	{
		printf(" %d :%s\n", i+1, p[i]);
	}

	/* 할당했던 메모리 3개를 운영체제에 반납함 */
	for (i = 0; i < 3; i++)
		free(p[i]);
}
