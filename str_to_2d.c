#include "doom.h"
/**
 * token_count - Count the number of words on a string
 * @str: string to split and count the words
 *
 * Return: number of words
 */
unsigned int token_count(char *str)
{
	char *token;
	char del[] = " \n\t";
	unsigned int m;

	token = strtok(str, del);
	m = 0;
	while (token != '\0')
	{
		token = strtok('\0', del);
		m++;
	}
	return (m);
}
/**
 * split_token - split a string on diferent arrays
 * @str: String to split
 * @splt_str: pointer with the memory space allocated fo the strs
 * @m: number of words to split
 *
 * Return: Double pointer with the adress of the sub-strings
 */
char **split_token(char **splt_str, char *str, unsigned int m)
{
	char *token;
	char del[] = " \n\t";
	unsigned int p_idx;

	token = strtok(str, del);
	p_idx = 0;
	while (p_idx < m)
	{
		splt_str[p_idx] = _strdup(token);
		if (splt_str[p_idx] == '\0')
		{
			while (p_idx > 0)
			{
				free(splt_str[p_idx]);
				p_idx--;
			}
			free(splt_str[0]);
			free(splt_str);
			free(str);
			perror("Failed to allocate memmory to 2 dim array");
			exit(1);
		}
		token = strtok('\0', del);
		p_idx++;
	}
	splt_str[p_idx] = NULL;
	return (splt_str);
}
/**
 * str_to_2d - Split a string in sub strings
 * @buff_str: String to split
 *
 * Return: Double pointer with the adress of the sub-strings
 */
char **str_to_2d(char *buff_str)
{
	char *tmp_len, *tmp_splt, **splt_str;
	unsigned int m;

	tmp_len = _strdup(buff_str);
	if (tmp_len == '\0')
	{
		perror("Failed to allocate memmory to temp process");
		exit(1);
	}
	tmp_splt = _strdup(buff_str);
	if (tmp_splt == '\0')
	{
		perror("Failed to allocate memmory to temp process");
		free(tmp_len);
		exit(1);
	}
	m = token_count(tmp_len);
	tmp_len = '\0';
	free(tmp_len);
	splt_str = malloc((m * sizeof(char *)) + 1);
	if (splt_str == '\0')
	{
		perror("Failed to allocate memmory to 2 dim array");
		free(tmp_splt);
		exit(1);
	}
	splt_str = split_token(splt_str, tmp_splt, m);
	tmp_splt = '\0';
	free(tmp_splt);
	return (splt_str);
}
