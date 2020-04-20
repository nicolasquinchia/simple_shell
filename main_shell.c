#include "doom.h"
/**
 * main - main function to process the shell interpreter
 * @ac: Number of paramethers
 * @av: Paramethers
 *
 * Return: Always 0 to terminate the process, success
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buffer = '\0';
	size_t buffsize = 0;
	int rtn_gtl = 1;
	char **args;
	unsigned int cmd_counter = 1;

	while (rtn_gtl != -1)
	{
		p_text("#cisfun$ ");
		rtn_gtl = getline(&buffer, &buffsize, stdin);
		buffer = _is_ascii(buffer);
		buffer = sep_check(buffer);
		args = str_to_2d(buffer, " \n\t");
		free(buffer);
		buffer = '\0';
		exe_new_process(args);
		free(args);
		args = '\0';
		cmd_counter++;
	}
	return (0);
}
