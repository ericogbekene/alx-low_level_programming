#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int openfile = 0, count = 0;
	ssize_t bytesWritten = 0;

	if (filename == NULL)
		return (-1);

	openfile = open(filename, O_RDWR | O_APPEND, 0664);

	if (openfile < 0)
		return (-1);

	while (*text_content != '\0')
	{
		count++;
		text_content++;
	}
	text_content -= count;

	bytesWritten = write(openfile, text_content, count);

	if (bytesWritten == -1)
		return (-1);
	close(openfile);
	return (1);
}
