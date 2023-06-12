#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
/**
 * _cp - copies the content of a file to another file
 * @src: the source file
 * @dest: destination file
 * Return: void
 */
void _cp(const char *src, const char *dest)
{
	ssize_t bytes_written, bytes_read;
	int src_desc, dest_desc, buffer[BUFFER_SIZE];
	mode_t file_perms = 0;

	if (access(dest, F_OK) == -1)
		file_perms = 0664;
	src_desc = open(src, O_RDONLY);
	if (src_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_desc = open(dest, (O_WRONLY | O_CREAT | O_TRUNC), file_perms);
	while ((bytes_read = read(src_desc, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_desc, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				dest);
			exit(99);
		}
	}
	if (close(src_desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_desc);
		exit(100);
	}
	if (close(dest_desc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_desc);
		exit(100);
	}
}
/**
 * main - point of entry
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
