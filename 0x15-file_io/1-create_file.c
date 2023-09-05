#include "main.h"

/**
 * create_file - creates a new file with r|w permissions
 * @filename: file to be created
 * @text_content: text to be written into the file
 *
 * Return: 1 on Success | -1 for error
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t output;
	int i = 0;
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	output = write(fd, text_content, i);

	if (output == -1)
	{
		return (0);
	}



	close(fd);

	return (1);
}
