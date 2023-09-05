#include "main.h"

/**
 * read_textfile -reads a text file and prints to STDOUT
 * @filename: pointer to the file being read
 * @letters: number of characters to print
 *
 * Return: the number of characters sucessfully read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filedesc, content, output;
	char *container;

	if (filename == NULL)
		return (0);

	container = malloc(sizeof(char) * letters);

	if (container == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);

	if (filedesc == -1)
	{
		free(container);
		return (0);
	}

	content = read(filedesc, container, letters);

	if (content == -1)
	{
		free(container);
		return (0);
	}


	output = write(STDOUT_FILENO, container, content);

	if (output == -1 || output != content)
	{
		free(container);
		return (-1);
	}

	free(container);
	close(filedesc); /* close file */

	return (output);
}
