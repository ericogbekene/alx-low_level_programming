#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readFile = 0;
	ssize_t readBytes = 0;
	char *container = NULL;

	if (filename == NULL)
		return (0);
	readFile = open(filename, O_RDONLY);

	if (readFile == -1)
	{
		return (0);
	}

	container = malloc(sizeof(char) * letters);

	if (container == NULL)
	{
		perror("Error allocating memory:");
		return (0);
	}

	readBytes = read(readFile, container, letters);
	if (readBytes == -1)
		return (0);
	{
		return (write(STDOUT_FILENO, container, readBytes));
	}
	close(readFile);
	return (0);

}
