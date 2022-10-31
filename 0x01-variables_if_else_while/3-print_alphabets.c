#include <stdio.h>

/**
 * main - print alphabet in small lowercase and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lc, uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');

	return (0);
}
