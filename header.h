#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

// Function prototypes
char *input(char *source, char *intro);
void lookup(char **cmdtoks);
void execute(char **cmdtoks);
int block_cmm(char **array_t);
int _putchar(char c);
int _writeOut(char *str);
char *pathway(char *path, char *array_t);
char *find_loc(char *array_t);
int main(int argc, char **envp);
void func_pid(char **array_t, char **envp);

#endif

