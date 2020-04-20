#include "doom.h"
/**
 * cp_environ - copy all the environment VARS
 *
 * Return: void
 */
char **cp_environ(void)
{
	unsigned int i, m;
	char **cp_env;

	while (environ[i] != '\0')
	{
		i++;
	}
	cp_env = malloc((sizeof(char *) * i) + 1);
	if (cp_env == '\0')
	{
		perror("Error: Failed to allocate memory");
		return ('\0');
	}
	m = 0;
	while (environ[m] != '\0')
	{
		cp_env[m] = _strdup(environ[m]);
		m++;
	}
	cp_env[m] = '\0';
	environ = cp_env;
	return (cp_env);
}
