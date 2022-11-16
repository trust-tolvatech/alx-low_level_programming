#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - printing to 100
 *
 * Return: Always(0)
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	printf("\n");
}
