#include <stdio.h>

/* 커피 자판기 함수를 구현 */
int coffee_machine(int button)
{
	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다.\n");
	printf("# 2. (자동으로) 종이컵을 준비한다.\n");

	/* 선택한 버튼에 따라 안내문을 출력함 */
	switch (button)
	{
	case 1 : printf("# 3. (자동으로) 보통커피를 탄다.\n"); break;
	case 2 : printf("# 3. (자동으로) 설탕커피를 탄다.\n"); break;
	case 3 : printf("# 3. (자동으로) 블랙커피를 탄다.\n"); break;
	default : printf("# 3. (자동으로) 아무거나 탄다.\n"); break;
	}

	printf("# 4. (자동으로) 물을 붓는다.\n");
	printf("# 5. (자동으로) 스푼으로 저어서 녹인다.\n\n");

	/* 30행으로 돌아감 */
	return 0;
}

void main() {
	
	int coffee;
	int ret;

	/* 커피를 주문 받음 */
	printf("어떤 커피를 드릴까요 ? (1:보통, 2:설탕, 3:블랙) ");
	scanf("%d", &coffee);

	/* 커피 자판기의 버튼을 누름 (coffee_machine() 함수를 호출함 ) */
	ret = coffee_machine(coffee);

	printf("손님 ~ 커피 여기 있습니다.\n\n");
}
