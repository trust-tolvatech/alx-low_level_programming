#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 10 times
 */
void more_numbers(void)
{
	int n, y;

	for (n = 1; n <= 10; n++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
