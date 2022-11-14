#include "main.h"

/**
 * print_line - prints a staright line
 * @n: the number of times the charatcer _ should be printed
 *
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
			_putchar('\n');
		}
	}
}
