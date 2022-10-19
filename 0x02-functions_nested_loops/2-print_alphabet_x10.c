#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int counter = 1;
	char alphabet = 'a';

	while (counter <= 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		counter++;
		_putchar('\n');
	}
}
