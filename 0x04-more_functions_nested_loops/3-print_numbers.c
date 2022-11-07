/**
 * print_numbers - prints numbers 1 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	char a;

	while (a < '10')
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}

	return (0);
}
