#include <stdio.h>
#include <malloc.h>

void main()
{
	/* 정수형 포인터를 선언함 */
	int *p, *s;
	int i, j;

	/* malloc() 함수로 정수형 메모리 3개를 할당함 */
	printf("malloc() 함수 사용\n");
	p = (int*) malloc(sizeof(int) * 3);

	/* 포인터 변수 p가 가리키는 곳의 실제값을 출력함 */
	for(i = 0; i < 3; i++)
		printf("할당된 곳의 초기값 p[%d] ==> %d\n", i, p[i]);

	free(p);

	/* calloc() 함수로 정수형 메모리 3개를 할당함 */
	printf("\ncalloc() 함수 사용\n");
	s = (int*) calloc(sizeof(int), 3);

	/* 포인터 변수 s가 가리키는 곳의 실제값을 출력함 */
	for(j = 0; j < 3; j++)
		printf("할당된 곳의 초기값 s[%d] ==> %d\n", j, s[j]);

	free(s);
}
