#include "header.h"

/**
 * _putchar - Writes a character to standard output (stdout).
 * @c: The character to write.
 *
 * Return: On success, returns the number of characters written (1).
 *         On error, returns -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _writeOut - Writes a string to standard output (stdout).
 * @str: The string to write.
 *
 * Return: The total number of characters written.
 */
int _writeOut(char *str)
{
    int i = 0, nums = 0;

    while (str[i])
    {
        nums += _putchar(str[i++]);
    }

    return nums;
}

