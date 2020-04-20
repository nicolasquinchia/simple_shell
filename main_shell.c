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
		printf("hello\n");
		p_text("#cisfun$ ");
		rtn_gtl = getline(&buffer, &buffsize, stdin);
		printf("hello after getline buffer is %s\n", buffer);
		buffer = _is_ascii(buffer);
		printf("hello after ascii buffer is %s\n", buffer);
		buffer = sep_check(buffer);
		printf("hello sep_check buffer is %s\n", buffer);
		args = str_to_2d(buffer, " \n\t");
		exe_new_process(args);
		cmd_counter++;
	}
	return (0);
}
