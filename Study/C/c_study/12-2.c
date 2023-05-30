#include <stdio.h>

void main()
{
	int aa[10000];	/* 정수형 배열을 선언함 */
	int *p;	/* 정수형 포인터 변수를 선언함 */
	int i, hap = 0;
	int cnt;

	/* 입력할 숫자의 개수를 입력함 */
	printf(" 입력할 개수는 ? ");
	scanf("%d", &cnt);

	/* 입력한 개수만큼 배열에 숫자를 입력함 */
	for(i = 0; i < cnt; i++)
	{
		printf(" %d 번째 숫자 : ", i+1);
		scanf("%d", &aa[i]);
	}

	/* 포인터 변수에 주소를 대입함 */
	p = aa;

	/* 합계를 누적함 */
	for(i = 0; i < cnt; i++)
		hap = hap + *(p+i);

	printf("입력 숫자의 합 ==> %d\n", hap);
}
