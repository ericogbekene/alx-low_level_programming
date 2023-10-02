#include "main.h"

void closefile(int filedescriptor);

/**
 * copyfile_function - copies the content of one file to another,using a buffer
 * @sourcefile: file to copy from
 * @newfile: file to copy to
 *
 * Return: void
 */

void copyfile_function(char *sourcefile, char *newfile)
{
	ssize_t fileTo = 0, fileFrom = 0, writeFile = 0, readFile = 0;
	char storehouse[1024];

	fileFrom = open(sourcefile, O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't read from file %s\n", sourcefile);
		exit(98);
	}
	fileTo = open(newfile, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newfile);
		exit(99);
	}

	readFile = read(fileFrom, storehouse, 1024);
	if (readFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourcefile);
		exit(98);
	}
	else
		while (readFile > 0)
		{
			writeFile = write(fileTo, storehouse, readFile);
			if (writeFile == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", newfile);
				exit(99);
			}
			readFile = read(fileFrom, storehouse, 1024);
		}
	closefile(fileFrom);
	closefile(fileTo);
}

/**
 * main - Entry point to program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: (0) on success
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyfile_function(av[1], av[2]);
	return (0);
}

/**
 * closefile - function to check whether a file was closed successfuly
 * @filedescriptor: file descriptor
 */

void closefile(int filedescriptor)
{
	int closedOK = 0;

	closedOK = close(filedescriptor);
	if (closedOK == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedescriptor);
		exit(100);
	}
}
