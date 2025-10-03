#include<stdio.h>

void modify_array(double *array, int index, double value)
{
	// midify element of array in index.
	array[index] = value;
}

void assign_array(double *array, int index, double value)
{
	array[index] = value;
}

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

