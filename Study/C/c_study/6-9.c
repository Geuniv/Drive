#include <stdio.h>

void main() {

	int hqp = 0;
	int i, num;

	printf("�� �Է� : ");
	scanf("%d", &num);

	for ( i = 1; i <= num; i++ ) {
		hqp = hqp + i;
	}

	printf (" 1���� %d������ �� : %d \n", num, hqp);
}