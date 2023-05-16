#include <stdio.h>

// plus() 함수를 정의함
int plus(int v1, int v2)
{
	int result;
	result = v1 + v2; // 3행에서 받은 두 매개변수의 합을 구함
	return result; // plus() 함수를 호출한 곳에 result 값을 반환함
}

void main() 
{
	int hap;

	// 매개변수 2개를 지정하여 plus() 함수를 호출하고 반환값은 hap에 저장함
	hap = plus(100,200);

	printf("100과 200의 plus() 함수 결과는 : %d\n", hap);
}
