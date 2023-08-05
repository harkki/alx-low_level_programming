#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int cont;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		cont = exclusive >> a;
		if (cont & 1)
			num++;
	}

	return (num);
}
