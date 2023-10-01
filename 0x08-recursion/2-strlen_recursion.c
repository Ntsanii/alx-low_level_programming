#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
