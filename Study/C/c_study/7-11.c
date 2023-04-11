#include <stdio.h>

void main() {
	
	int hap = 0;
	int i;

	for ( i = 1; i <= 100; i++ )
	{
		hap += i;

		// 누적된 값이 2,000이 넘으면 mygoto : 로 무조건 이동함
		if ( hap > 2000 )
			goto mygoto;
	}

mygoto :
	printf("1부터 %d까지 합하면 2000이 넘어요. \n", i);
}
