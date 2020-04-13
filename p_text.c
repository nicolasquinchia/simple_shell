#include "doom.h"
/**
 * p_text - print text to the std output
 * @text: text to print..
 *
 * Return: Number of characters printed
 */
int p_text(char *text)
{
	unsigned int i;

	i = 0;
	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	return (i);
}
