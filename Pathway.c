#include "header.h"

/*
 * pathway - Find the location of an executable file in the given path.
 * @path: The PATH environment variable.
 * @array_t: The name of the executable file.
 *
 * Return: A pointer to the full path of the executable if found, NULL otherwise.
 */

char *pathway(char *path, char *array_t)
{
    char *loc_cpy, *loc_token, *path_file;
    char *del = ":";

    loc_cpy = strdup(path);
    loc_token = strtok(loc_cpy, del);
    path_file = malloc(strlen(array_t) + strlen(loc_token) + 2);

    while (loc_token != NULL)
    {
        strcpy(path_file, loc_token);
        strcat(path_file, "/");
        strcat(path_file, array_t);
        strcat(path_file, "\0");

        if (access(path_file, X_OK) == 0)
        {
            free(loc_cpy);
            return (path_file);
        }

        loc_token = strtok(NULL, del);
    }

    free(path_file);
    free(loc_cpy);

    return (NULL);
}

/*
 * find_loc - Find the location of an executable file in the PATH environment.
 * @array_t: The name of the executable file.
 *
 * Return: A pointer to the full path of the executable if found, NULL otherwise.
 */

char *find_loc(char *array_t)
{
    char *path = getenv("PATH");

    if (path)
    {
        char *result = pathway(path, array_t);
        return (result);
    }

    return (NULL);
}

