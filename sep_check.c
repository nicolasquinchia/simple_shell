#include "doom.h"
/**
 * sep_check - check if the string just have sep chars
 * @buffer: string to check
 *
 * Return: Return NULL if just find sep chars else buffer..
 */
char *sep_check(char *buffer)
{
	unsigned int i = 0, spaces = 0, tabs = 0;

	if (buffer[0] == '\n')
	{
		return ('\0');
	}
	i = 0;
	while (buffer[i] != '\n')
	{
		if (buffer[i] == ' ')
		{
			spaces++;
		}
		if (buffer[i] == '\t')
		{
			tabs++;
		}
		i++;
	}
	if (spaces > 0 || tabs > 0)
	{
		if (spaces == i || tabs == i)
		{
			return ('\0');
		}
		else if ((spaces + tabs) == i)
		{
			return ('\0');
		}
	}
	return (buffer);
}
