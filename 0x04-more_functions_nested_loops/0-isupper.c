/**
 * _isupper - checks if a character is uppercase
 * @c: the character
 *
 * Return: 1 if character is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
