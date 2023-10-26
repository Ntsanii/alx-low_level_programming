#include "main.h"
/**
 * set_bit - program sets the value of bit at given indx
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 success, 0 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
