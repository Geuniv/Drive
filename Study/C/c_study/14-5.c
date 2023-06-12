#include <stdio.h>

#define PI 3.1415926535 /* 상수를 PI로 정의함 */
#define STR "원의 면적을 계산했습니다.\n" /* 문자열을 STR로 정의함 */
#define END_MSG printf("프로그램이 종료되었습니다.\n\n") /* 함수를 END_MSG로 정의함 */

void main()
{
	/* 정의한 PI를 사용함 */
	printf("반지름이 10인 원의 면적은 ==> %10.5f \n", 10 * 10 * PI);

	/* 정의한 STR를 사용함 */
	printf(STR);

	/* 정의한 END_MSG를 사용함 */
	END_MSG;
}
