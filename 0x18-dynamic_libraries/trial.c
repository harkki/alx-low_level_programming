#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int pritnf(const char *formt, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "congratualtions, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
