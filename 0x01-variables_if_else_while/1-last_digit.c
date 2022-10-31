#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit for a randomly generated number
 *
 * Return: Always 0
 */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;

	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r < 6 && r != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}

	return (0);
}
