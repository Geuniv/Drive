#include <stdio.h>

void main() {
	
	int a = 100;

	// 조건식을 먼저 판단하므로 while문 내부가 실행되지 않음
	while ( a == 200 )
	{
		printf("while 문 내부에 들어 왔습니다. \n");
	}

	// 먼저 문장을 실행한 후 조건식을 판단하므로 do ~ while문 내부가 실행됨
	do {
		printf("do ~ while문 내부에 들어 왔습니다. \n");
	} while ( a == 200 );
}
