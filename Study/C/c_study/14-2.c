#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;

	/* 매개 변수가 하나가 아니면 메시지를 출력한 후 프로그램을 종료함 */
	if ( argc != 2 )
	{
		printf("\n -- 매개변수를 1개 사용하세요 -- \n");
		return;
	}

	/* 첫 번째 매개변수로 넘어온 것을 읽기 모드로 염 */
	rfp = fopen(argv[1], "r");

	for( ;; )
	{
		/* 파일의 내용을 한 줄 읽어 들임 */
		fgets(str, 199, rfp);

		/* 파일의 끝이면 무한 루프를 종료함 */
		if (feof(rfp))
			break;

		/* 읽을 내용을 출력함 */
		printf("%s", str);
	}
	fclose(rfp);
}
