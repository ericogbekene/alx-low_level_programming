#include "main.h"

void closefile(int fd)
{
	int closed;

	closed = close(fd);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file %d\n", fd);
		exit(98);
	}
}
