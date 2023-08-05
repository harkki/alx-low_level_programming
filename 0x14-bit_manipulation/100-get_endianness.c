#include "main.h"

/**
 * get_endianness - checks big-endian or little-endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *d = (char *) &a;

	return (*d);
}
