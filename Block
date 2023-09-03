#include "header.h"

/**
 * block_cmm - function for built-in functions
 * @array_t: pointer to args
 *
 * Return: 0
 */

int block_cmm(char **array_t)
{
    if (strcmp(array_t[0], "exit") == 0)
    {
        _writeOut("Exiting letvish.....\n");
        exit(0);
    }
    else if (strcmp(array_t[0], "cd") == 0)
    {
        if (array_t[1] == NULL)
        {
            chdir(getenv("HOME"));
        }
        else
        {
            chdir(array_t[1]);
        }
        return (1);
    }
    return (0);
}

