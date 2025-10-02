#include<stdio.h>
int main(void)
{
	int count = 100;
	int *pointer = NULL;
	pointer = &count;
	printf("count = %d, *pointer = %d.\n", count, *pointer);
	return 0;
}

