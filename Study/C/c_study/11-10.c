#include <stdio.h>

void main() {

	FILE *wfp;

	wfp = fopen("c:\\c_study\\gugu.txt", "w");
	
	for ( int  k = 2; k <= 9; k++ ) {
		fprintf(wfp, " #Á¦%d´Ü#  ", k);
	}
	
	fputs("\n\n", wfp);

	for ( int i = 1; i <= 9; i++ ) {
		for ( int k = 2; k <= 9; k++ ) {
			fprintf(wfp, "%2dX%2d=%2d  ", k, i, k*i );
		}
		fputs("\n", wfp);
	}

}
