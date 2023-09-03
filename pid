#include "header.h"

/**
 * func_pid - Function for process execution with a given command and arguments.
 * @array_t: Pointer to arguments.
 * @envi: Pointer to environment variables.
 */

void func_pid(char **array_t, char **envi)
{
    int exe, status;
    pid_t child_pid;
    char *path = find_loc(array_t[0]);

    if (path == NULL)
    {
        _writeOut("Command not found\n");
        return;
    }

    child_pid = fork();

    if (child_pid < 0)
    {
        perror("Fork error");
        free(path);
        exit(1);
    }
    else if (child_pid == 0)
    {
        exe = execve(path, array_t, envi);

        if (exe == -1)
        {
            perror("Command execution failed");
        }

        exit(1);
    }
    else
    {
        wait(&status);
    }

    free(path);
}

