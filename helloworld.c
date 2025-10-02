#include<stdio.h>

void print_message(const char *message)
{
	printf(message);
}

int main(void)
{
	print_message("hello world.\n");
	return 0;
}

