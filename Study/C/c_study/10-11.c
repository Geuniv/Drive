#include <stdio.h>

void gugu(int dan) {
	
	for ( int i = 1; i < 10; i++ ) {
		printf(" %d X %2d=%3d\n", dan, i, dan * i );
	}
}

void main() {

	int a;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &a);

	gugu(a);

}
