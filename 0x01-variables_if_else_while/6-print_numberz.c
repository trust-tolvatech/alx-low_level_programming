#include <stdio.h>

/**
 * main - print all number of base 10 using putchar
 *
 * Return: Always 0;
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
