#include "main.h"

/**
 * create_file - creates a file with read and write permissions
 * @filename: name of file to create
 * @text_content: text to write into newly created file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int newfile = 0;
	ssize_t bytesWritten = 0;

	if (filename == NULL)
		return (-1);

	newfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (newfile == -1)
		return (-1);

	while (*text_content != '\0')
	{
		count++;
		text_content++;
	}
	text_content -= count;

	if (text_content == NULL)
		return (-1);
	bytesWritten = write(newfile, text_content, count);

	if (bytesWritten == -1)
		return (-1);
	close(newfile);
	return (1);

}
