#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 10 times
 */
void more_numbers(void)
{
	int n, c;

	for (n = 0; n < 10; n++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
