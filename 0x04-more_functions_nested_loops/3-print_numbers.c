/**
 * print_numbers - prints numbers 1 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
