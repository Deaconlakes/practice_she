#include "header.h"

int main(int argc, char **envp)
{
    char *prompt = "lestish=> ";
    char *input = NULL;
    char *array_t[100];
    char *del = " \n";
    size_t inpu_size = 0;
    ssize_t num_cha;
    int b;

    while (1)
    {
        if (isatty(0))
            _writeOut(prompt);

        num_cha = getline(&input, &inpu_size, stdin);

        if (num_cha == -1)
        {
            free(input);
            exit(0);
        }

        a = 0;

        while (input[a])
        {
            if (input[a] == '\n')
                input[a] = 0;
            a++;
        }

        b = 0;
        array_t[b] = strtok(input, del);

        while (array_t[b])
        {
            array_t[++b] = strtok(NULL, del);
        }

        array_t[b] = NULL;

        if (strcmp(array_t[0], "exit") == 0)
        {
            _writeOut("Exiting...\n");
            free(input);
            exit(0);
        }
        else if (strcmp(array_t[0], "cd") == 0)
        {
            block_cmm(array_t);
            continue;
        }

        func_pid(array_t, envp);
    }

    free(input);

    return (0);
}

