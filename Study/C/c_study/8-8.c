#include <stdio.h>

void main() {

	char ss[5] = "abcd";
	char tt[5];
	int i;

	for ( i = 0; i < 4; i++ ) { //4회 반복해서 각 배열에 문자를 반대 순서로 대입함
		tt[i] = ss[3-i];
	}
	tt[4] = '\0'; // 마지막에 널 문자를 삽입함

	printf("거꾸로 출력한 결과 ==> %s \n", tt);
}
