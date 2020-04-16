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
	unsigned int cmd_counter = 0;

	while (rtn_gtl != -1)
	{
		p_text("#cisfun$ ");
		rtn_gtl = getline(&buffer, &buffsize, stdin);
		args = str_to_2d(buffer, " \n\t");
		exe_new_process(args);
		cmd_counter++;
	}
	return (0);
}
