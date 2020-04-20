#include "doom.h"
/**
 * _is_ascii - Check if the characters typed are printable ASCII
 * @buffer: String typed in stdin to check
 *
 * Return: Null if fails, the same pointer if success
 */
char *_is_ascii(char *buffer)
{
	unsigned int i;

	while (buffer[i] != '\0')
	{
		if (buffer[i] > 126 || buffer[i] < 32)
		{
			return ('\0');
		}
		else
		{
			i++;
		}
	}
	return (buffer);
}
