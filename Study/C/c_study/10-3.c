#include <stdio.h>

/* Ŀ�� ���Ǳ� �Լ��� ���� */
int coffee_machine(int button) {

	printf("\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�.\n");
	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�.\n");

	/* ������ ��ư�� ���� �ȳ����� ����� */
	switch (button)
	{
	case 1 : printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��.\n"); break;
	case 2 : printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��.\n"); break;
	case 3 : printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��.\n"); break;
	default : printf("# 3. (�ڵ�����) �ƹ��ų� ź��.\n"); break;
	}

	printf("# 4. (�ڵ�����) ���� �״´�.\n");
	printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�.\n\n");

	/* ���� ȣ���� ������ ���ư� ( 29��, 34��, 39�� ) */
	return 0;
}

void main() {

	int coffee;
	int ret;

	/* �ֹ��� �ް� ���Ǳ��� ��ư�� ���� ( �Լ��� ȣ���� ) */
	printf("A��, � Ŀ�� �帱��� ? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("A�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
	
	/* �ֹ��� �ް� ���Ǳ��� ��ư�� ���� ( �Լ��� ȣ���� ) */
	printf("B��, � Ŀ�� �帱��� ? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("B�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
	
	/* �ֹ��� �ް� ���Ǳ��� ��ư�� ���� ( �Լ��� ȣ���� ) */
	printf("C��, � Ŀ�� �帱��� ? (1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("C�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
}
