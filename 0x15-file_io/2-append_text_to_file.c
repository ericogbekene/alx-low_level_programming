#include "main.h"

/**
 * append_text_to_file - appends text content to the end of a file
 * @filename: a pointer to the file to work on
 * @text_content: to append to the file
 *
 * Return: 1 On Success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, filedesc, output = 0;

	if (filename == NULL)
		return (-1);

	filedesc = open(filename, O_WRONLY | O_APPEND);
	if (filedesc == -1)
		return (-1);

	if (text_content == NULL)
		return (0);

	while (text_content[i] != '\0')
		i++;

	output = write(filedesc, text_content, i);
	if (output == -1)
	{
		close(filedesc);
		return (-1);
	}
	close(filedesc);

	return (1);
}
