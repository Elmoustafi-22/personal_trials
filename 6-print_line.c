#include "main.h"

/**
 * print_line - writes a functions that draws a straight line
 *
 * @n: is the number of times the char should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
