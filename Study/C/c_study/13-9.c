#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main() {
	
	struct student {
		char name[10];
		int age;
	};
	
	int n;
	printf("입력할 학생 수 : ");
	scanf("%d", &n);

	struct student s;
	struct student* p = (struct student*) malloc(sizeof(struct student) * n);

	*p = s;
	for ( int i = 0; i < n; i++) {
		printf("이름과 나이 입력 : ");
		scanf("%s %d", (p + i)->name, &(p + i)->age);
	}

	printf("\n\n-- 학생 명단 --\n");
	for (int i = 0; i < n; i++) {
		printf("학생:%s , 나이:%d\n", (p + i)->name, (p + i)->age);
	}
}
