#include "doom.h"
/**
 * _strcmp - compare two strings
 * @s1: String 1 to compare
 * @s2: String 2 to compare
 *
 * Return: Integer with the diference between s1 and s2
 */
int _strcmp(const char *s1, const char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
