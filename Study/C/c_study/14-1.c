#include <stdio.h>

/* 매개 변수를 저장함 */
void main(int argc, char* argv[])
{
	int i;

	/* 매개 변수의 개수를 출력함 */
	printf(" argc 매개변수 ==> %d \n", argc);

	/* 매개 변수의 개수만큼 반복하여 매개변수의 내용을 출력함 */
	for (i=0; i<argc; i++)
		printf(" argv[%d] 매개변수 ==> %s \n", i, argv[i]);
}
