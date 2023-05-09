#include <stdio.h>

void main() {
	
	char stack[5];
	int top = 0;

	char carName = 'A'; // 자동차 이름을 A부터 시작함
	int select = 9; // 사용자가 선택할 작업을 입력할 변수

	while ( select != 3 ) 
	{	
		printf ("<1> 자동차 넣기 <2> 자동차 빼기 <3> 끝 : " );
		scanf("%d", &select );// 사용자가 선택한 값

		switch ( select ) 
		{ // 사용자가 1 ( 넣기 ) 실행
		case 1 : 
			if ( top >= 5 ) // 자동차가 5대가 있으면 못 들어감
			{   printf("터널이 꽉 차서 차가 못 들어감\n");   }
			else
			{   stack[top] = carName++;
			    printf( " %c 자동차가 터널에 들어감\n", stack[top]);
			    top++;
			} // 자동차를 넣고 top 값을 1 증가시킴
			break;

		// 사용자가 2 ( 빼기 ) 실행
		case 2:
			if ( top <= 0 ) // 자동차가 없으면 빼낼 것도 없음
			{   printf("빠져나갈 자동차가 없음\n");   }
			else
			{
				top--;
				printf(" %c 자동차가 터널에서 빠짐\n", stack[top]);
				stack[top] = ' ';
			} // 자동차가 있으면 top 값을 1 감소시키고 자동차를 빼냄
			break;
		case 3:
			printf("현재 터널에 %d대가 있음.\n", top);
			printf("프로그램을 종료합니다.\n");
			break; // 사용자가 3 ( 끝 ) 을 선택하면 현재 자동차 수를 출력하고 종료함
		default :
		printf("잘못 입력했습니다. 다시 입력하세요. \n");
		}
	}
}
