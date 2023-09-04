#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0644);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	write(fd, text_content, i);

	close(fd);

	return (1);
}
