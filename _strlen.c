#include "doom.h"
/**
 * _strlen - returns the length of a string.
 * @s: array with the characters of the word
 *
 * Return: number of character of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
