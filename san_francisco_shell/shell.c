#include "shell.h"

int main(int ac, char **ac, char **env)
{
	int return_status = EXIT_SUCCESS;
	char *line = NULL;
	size_t n = 0;
	char **tokens = NULL;

	void(ac);
	void(argv);
	void(env);
	if (isatty(STDIN_FILENO))
	{
		shell_promt();
	}
	while ( getline(&line, &n, stdin) != -1)
	{
		printf("%s\n", line);
		
	
	/* start loop */
	/* get line */
	/* parse user unput */
	/* execute user input */
	/* print prompt again */
	/* restart the loop */
	}
}
