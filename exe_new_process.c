#include "doom.h"
/**
 * exe_new_process - Create a new process and execute
 * @args: Array of pointers with arguments taken by getline
 *
 * Return: void
 */
void exe_new_process(char **args)
{
	pid_t child_id;

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
