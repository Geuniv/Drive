#include <string.h> // 문자열 함수의 목록이 있는 string.h를 포함함
#include <stdio.h>

void main() {

	char ss[] = "XYZ";
	int len;

	len = strlen(ss); // 문자열 배열 ss의 길이를 구함 ( 널 문자 제외 )

	// 큰따옴표의 내용을 출력하기 위해 \" 문자를 사용함
	printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);
}
