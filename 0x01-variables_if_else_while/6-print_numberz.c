#include <stdio.h>

/**
 * main - print all number of base 10 using putchar
 *
 * Return: Always 0;
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
