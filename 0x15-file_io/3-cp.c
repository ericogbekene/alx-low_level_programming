#include "main.h"

/**
 * copyfile_function - copies text from one file to another
 * @sourcefile: source file
 * @newfile: where text is copied into
 *
 */

void copyfile_function(char *sourcefile, char *newfile)
{
	ssize_t file_to, file_from, write_file, readfile;
	char buffer[1024];

	file_from = open(sourcefile, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcefile);
		exit(98);
	}

	file_to = open(newfile, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", newfile);
		exit(99);
	}

	/* read from source file */
	/* readfile = read(file_from, buffer, 1024); */
	while ((readfile = read(file_from, buffer, 1024)) > 0)
	{
		write_file = write(file_to, buffer, readfile);
		if (write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", newfile);
			exit(99);
		}
	}
	if (readfile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcefile);
		exit(98);
	}
	close(file_from); /* replacce this with a call to function to check if close was succesful */
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error closing sourcefile %s\n", sourcefile);
	}
	close(file_to);
}

/* Usage */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copyfile_function(argv[1], argv[2]);
	return (0);
}
