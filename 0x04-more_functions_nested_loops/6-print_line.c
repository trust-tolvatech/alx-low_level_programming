#include "main.h"

/**
 * print_line - prints a staright line
 * @n: the number of times the charatcer _ should be printed
 *
 * Return: n
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
