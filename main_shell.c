#include "doom.h"
/**
 * main - main function to process the shell interpreter
 *
 * Return: Always 0 to terminate the process, success
 */
int main(void)
{
	char *buffer = '\0';
	size_t buffsize = 0;
	int rtn_gtl = 1;
	char **args;
	unsigned int i;

	while (rtn_gtl != -1)
	{
		p_text("#cisfun$ ");
		rtn_gtl = getline(&buffer, &buffsize, stdin);
		args = str_to_2d(buffer);
		i = 0;
		while (args[i] != '\0')
		{
			printf("%s\n", args[i]);
			i++;
		}
	}
	return (0);
}
