#include <stdio.h>

/**
 * main - print all number of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
