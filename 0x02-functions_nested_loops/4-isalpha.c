#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character
 * Return: 1 if character is aletter, lowercase or uppercase and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}
