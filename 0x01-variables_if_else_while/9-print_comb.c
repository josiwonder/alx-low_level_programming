nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Entry point
 *Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
