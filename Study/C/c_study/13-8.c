#include <stdio.h>

void main()
{
	/* 0부터 6까지의 열거형임 */
	enum week { sun, mon, tue, wed, thu, fri, sat };
	enum week ww; /* 열거형 변수 ww를 선언함 */
	ww = sat; /* 변수 ww에 값을 대입함 */

	/* ww가 sun(0)인지 아닌지의 여부에 따라 문장을 출력함 */
	if (ww == sun)
		printf("오늘은 일요일입니다.\n");
	else
		printf("오늘은 일요일이 아닙니다.\n");
}
