#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
**main - Entry point
**return: 0
**/
/* betty style doc for function main goes there */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
