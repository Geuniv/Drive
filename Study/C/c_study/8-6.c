#include <stdio.h>

void main() {
	
	int aa[] = {10, 20, 30, 40, 50};
	int count;

	count = sizeof(aa) / sizeof(int); // 4�迭 ũ�⸦ �����

	printf("�迭 aa[]�� ����� ������ %d �Դϴ�. \n", count);
}