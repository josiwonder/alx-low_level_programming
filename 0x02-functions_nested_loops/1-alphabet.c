#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(char ch)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		_putchar("/n");
		return (0);
	}
