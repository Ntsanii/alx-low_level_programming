#include "main.h"
/**
 * clear_bit - program sets the value of bit to 0 at given indx
 * @n: parameter
 * @index: inde
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
