#include "doom.h"
/**
 * _strcat - Concatenates 2 strings
 * @s1: String 1 to concatenate
 * @s2: String 2 to concatenate
 *
 * Return: Pointer with the adress of 2 ats strings
 */
char *_strcat(char *s1, char *s2)
{
	char *result;
	unsigned int len_1, len_2, n;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	result = malloc((sizeof(char) * (len_1 + len_2)) + 1);
	if (result == '\0')
	{
		perror("Error: can not allocate memmory for temp process");
		exit(1);
	}
	for (n = 0; n < len_1; n++)
	{
		result[n] = s1[n];
	}
	len_1 = n;
	for (n = 0; n < len_2; n++)
	{
		result[len_1] = s2[n];
		len_1++;
	}
	result[len_1] = '\0';
	return (result);
}
