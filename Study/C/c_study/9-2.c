#include <stdio.h>

void main() {
	
	char stack[5];
	int top = 0;

	char carName = 'A'; // �ڵ��� �̸��� A���� ������
	int select = 9; // ����ڰ� ������ �۾��� �Է��� ����

	while ( select != 3 ) 
	{	
		printf ("<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �� : " );
		scanf("%d", &select );// ����ڰ� ������ ��

		switch ( select ) 
		{ // ����ڰ� 1 ( �ֱ� ) ����
		case 1 : 
			if ( top >= 5 ) // �ڵ����� 5�밡 ������ �� ��
			{   printf("�ͳ��� �� ���� ���� �� ��\n");   }
			else
			{   stack[top] = carName++;
			    printf( " %c �ڵ����� �ͳο� ��\n", stack[top]);
			    top++;
			} // �ڵ����� �ְ� top ���� 1 ������Ŵ
			break;

		// ����ڰ� 2 ( ���� ) ����
		case 2:
			if ( top <= 0 ) // �ڵ����� ������ ���� �͵� ����
			{   printf("�������� �ڵ����� ����\n");   }
			else
			{
				top--;
				printf(" %c �ڵ����� �ͳο��� ����\n", stack[top]);
				stack[top] = ' ';
			} // �ڵ����� ������ top ���� 1 ���ҽ�Ű�� �ڵ����� ����
			break;
		case 3:
			printf("���� �ͳο� %d�밡 ����.\n", top);
			printf("���α׷��� �����մϴ�.\n");
			break; // ����ڰ� 3 ( �� ) �� �����ϸ� ���� �ڵ��� ���� ����ϰ� ������
		default :
		printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���. \n");
		}
	}
}
