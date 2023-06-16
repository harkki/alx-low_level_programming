#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that print a line of code without using the printf and puts function
 * Return: 1 (success)
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
