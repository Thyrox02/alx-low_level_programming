#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int u, b;

	for (u = 0; u <= 9; u++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
