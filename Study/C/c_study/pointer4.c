#include <stdio.h>

void func() 
{
	printf("function\n");
}

int main()
{
	void (*ptr)();

	ptr = &func;

	(*ptr)();

	return 0;
}
