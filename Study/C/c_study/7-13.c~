#include <stdio.h>

void main() {
	
	int a, b, c;
	int i;
	int hap = 0;

	printf("합계의 시작값 ==> ");
	scanf("%d", &a);
	
	printf("합계의 끝값 ==> ");
	scanf("%d", &b);

	printf("배수 ==> ");
	scanf("%d", &c);

	for ( i = a; i <= b; i++ ) {
		
		// 배수에 입력한 변수가 해당 배수로 나눠질때 hap에 합쳐서 저장함.	
		if ( i % c == 0 ) {
			hap += i;
		}
	}

	printf("%d부터 %d까지의 %d배수의 합계 ==> %d \n", a, b, c, hap); 
}
