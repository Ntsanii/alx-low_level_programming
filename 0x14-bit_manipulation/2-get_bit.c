#include "main.h"
/**
 * get_bit - program returns the value of bit at given indx
 * @n: number to check bits
 * @index: index at whgich to check bit
 * Return: value of the bit, or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
			return (-1);
		divisor = 1 << index;
		check = n & divisor;
		if (check == divisor)
			return (1);
		return (0);
}
