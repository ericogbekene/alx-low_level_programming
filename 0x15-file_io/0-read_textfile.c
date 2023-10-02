#include "main.h"

/**
 * read_textfile - reads the content of a file, and writes it to stdout
 * @filename: file to read from
 * @letters: number of characters to read from file
 *
 * Return: number of characters read successfully
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readFile = 0;
	ssize_t readBytes = 0, output = 0;
	char *container = NULL;

	if (filename == NULL)
		return (0);
	readFile = open(filename, O_RDONLY);

	if (readFile == -1)
		return (0);

	container = malloc(sizeof(char) * letters);

	if (container == NULL)
	{
		perror("Error allocating memory:");
		return (0);
	}

	readBytes = read(readFile, container, letters);
	if (readBytes == -1)
		return (0);

	output = write(STDOUT_FILENO, container, readBytes);
	if (output == -1 || output != readBytes)
	{
		free(container);
		return (-1);
	}
	close(readFile);
	return (output);
}
