#ifndef DOOM_H
#define DOOM_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Shell Functions */
int p_text(char *text);
char **str_to_2d(char *buff_str);
void exe_new_process(char *buffer);

/* Basic Functions */
int _putchar(char c);

/* Strings Functions */
char *_strdup(char *str);

#endif /* DOOM_H */
