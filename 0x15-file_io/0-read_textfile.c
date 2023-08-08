#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters it could read and print
 *        0 if the file can not be opened or read or is NULL or
 *        if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t w;
	ssize_t r;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fn, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fn);
	return (w);
}
