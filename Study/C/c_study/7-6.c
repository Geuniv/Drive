#include <stdio.h>

void main() {
	
	int menu;

	do {
		printf("\n손님 주문하시겠습니까 ? \n");
		printf("<1>카페라떼, <2>카푸치노, <3>아메리카노, <4>그만시킬래요 ==> ");
		scanf("%d", &menu); //커피를 선택함

		switch(menu)
		{
			case 1 : printf("#카페라떼 주문하셨습니다. \n"); break;
			case 2 : printf("#카푸치노 주문하셨습니다. \n"); break;
			case 3 : printf("#아메리카노 주문하셨습니다. \n"); break;
			case 4 : printf("#주문하신 커피 준비하겠습니다. \n"); break;
			default : printf("잘못 주문하셨습니다. \n");
		}
	} while ( menu != 4 ); // 선택한 메뉴가 4번이 아니면 반복해서 주문을 받음 4번이면 출력 후 정지함.
}
