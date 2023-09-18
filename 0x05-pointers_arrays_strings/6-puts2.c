#include "main.h"

/**
 * puts2 - function should print only one character out
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}

		index++;
	}
	_putchar('\n');
}
