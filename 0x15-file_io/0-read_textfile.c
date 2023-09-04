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
	ssize_t content, output;
	size_t filedesc;
	char *container;

	container = malloc(sizeof(char) * letters);

	if (container == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);

	/*if (filedesc == -1)
	{
		 print error message
		return (0);
	}*/


	content = read(filedesc, container, letters);

	/*if (content == -1)
	{
		 print Error Message
		return (1);
	}*/

	output = write(1, container, content);

	close(filedesc); /* close file */

	return (output);
}
