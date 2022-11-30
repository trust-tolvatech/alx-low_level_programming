#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: string pointer
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
