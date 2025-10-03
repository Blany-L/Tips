#include<stdio.h>

void print_message(const char *message, int level)
{
	switch(level)
	{
		case 0:printf("normal.\n");break;
		case 1:printf("warning.\n");break;
		case 2:printf("error.\n");break;
		default:printf("other.\n");break;
	}
	printf(message);
	return;
}

int main(void)
{
	print_message("hello world.\n");
	return 0;
}

