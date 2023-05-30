#include <stdio.h>
#include <malloc.h>

void main()
{
	int* p;
	int i, hap = 0;
	int cnt = 0;
	int data;

	p = (int*) malloc(sizeof(int) * 1);
	printf(" 1 번째 숫자 : ");
	scanf("%d", &p[0]);	/* 첫 번째 값을 입력 받고 데이터 개수를 1 증가시킴 */
	cnt++;

	/* 두 번째 값부터 계속 입력 받음 */
	for(i = 2; ; i++)
	{
		printf(" %d 번째 숫자 : ", i);
		scanf("%d", &data);

		/* 입력된 값이 0이 아니면 메모리를 한 칸 추가하고, 0이면 for문을 빠져 나감 */
		if (data != 0)
			p = (int*) realloc(p, sizeof(int) * i);
		else
			break;

		p[i-1] = data;
		cnt++;
	}

	for(i = 0; i < cnt; i++)
		hap = hap + p[i];

	printf("입력 숫자 합 ==> %d\n", hap);

	free(p);
}
