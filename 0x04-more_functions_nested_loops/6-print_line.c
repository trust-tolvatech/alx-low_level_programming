#include "main.h"

/**
 * print_line - prints a staright line
 * @n: the number of times the charatcer _ should be printed
 u*
 * Return: n
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
