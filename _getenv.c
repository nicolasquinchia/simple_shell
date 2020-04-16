#include "doom.h"
/**
 * _getenv - get an environment variable
 * @name: Name of the variable to find
 *
 * Return: Pointer with the value of the variable.
 */
char *_getenv(const char *name)
{
	char *temp;
	char *token;
	char *value;
	char sep[] = "=";
	unsigned int i;

	i = 0;
	while (environ[i] != '\0')
	{
		temp = _strdup(environ[i]);
		if (temp == '\0')
		{
			perror("Error: can not allocate memory space for tmp variable for process");
			return ('\0');
		}
		token = strtok(temp, sep);
		if (_strcmp(name, token) == 0)
		{
			token = strtok(NULL, sep);
			value = _strdup(token);
			if (value == '\0')
			{
				perror("Error: can not allocate memory space for tmp process");
				free(temp);
				return ('\0');
			}
			free(temp);
			return (value);
		}
		else
		{
			free(temp);
		}
		i++;
	}
	return ('\0');
}
