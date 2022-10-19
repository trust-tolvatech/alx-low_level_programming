#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int counter = 1;
	char alphabet;

	while (counter <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}

		_putchar('\n');
		counter++;
	}
}
