#include<stdio.h>

void print_array(double *array, int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%f\t", array[i]);
	}
	putchar('\n');
}

int main(void)
{
	int count = 100;
	int *pointer = NULL;
	pointer = &count;
	printf("count = %d, *pointer = %d.\n", count, *pointer);
	return 0;
}

