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

	while (rtn_gtl != -1)
	{
		p_text("#cisfun$ ");
		rtn_gtl = getline(&buffer, &buffsize, stdin);
		exe_new_process(buffer);
	}
	return (0);
}
