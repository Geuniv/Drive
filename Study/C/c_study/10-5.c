#include <stdio.h>

/* 매개변수 3개를 받아서 계산하는 함수 */
int calc(int v1, int v2, int op)
{
	int result;

	/* 매개변수 값에 따라 '1:덧셈, 2:뺄셈, 3:곱셈, 4:나눗셈'을 실행함 */
	switch (op)
	{
		case 1 : result = v1 + v2; break;
		case 2 : result = v1 - v2; break;
		case 3 : result = v1 * v2; break;
		case 4 : result = v1 / v2; break;
	}

	/* 계산 결과를 반환함 */
	return result;
}

void main() {

	int res;
	int oper, a, b;

	/* 연산자를 입력함 */
	printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
	scanf("%d", &oper);

	/* 계산할 두 숫자를 입력함 */
	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	/* 매개변수 3개를 넣고 calc() 함수를 호출함. 계산 결과는 res에 저장 */
	res = calc(a, b, oper);

	printf("계산 결과는 : %d\n", res);
}
