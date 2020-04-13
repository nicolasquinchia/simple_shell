#include "doom.h"
/**
 * exe_new_process - Create a new process and execute
 * @args: arguments and name of the process to execute
 *
 * Return: void
 */
void exe_new_process(char *buffer) 
{
	pid_t child_id;
	extern char **environ;
	char **args;

	args = str_to_2d(buffer);
	child_id = fork();
	if (child_id < 0)
	{
		perror("Error: Failed to create new process");
		exit(1);
	}
	else if (child_id == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror("Error: Failed to execute the process");
			exit(1);
		}
	}
	else
	{
		wait(NULL);
	}
}
