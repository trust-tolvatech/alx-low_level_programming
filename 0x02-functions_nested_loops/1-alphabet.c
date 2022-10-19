#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet;

	while (alphabet <= 'z')
		_putchar(alphabet);

	_putchar('\n');

	return (0);
}
