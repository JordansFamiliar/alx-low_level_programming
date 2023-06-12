#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: is the number of letter it should read and print
 * Return: the actual number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc;
	ssize_t bytesRead;
	char *buffer = NULL;

	if (filename == NULL || letters <= 0)
		return (0);
	desc = open(filename, O_RDONLY);
	buffer = malloc(letters + 1);
	if (desc == -1 || buffer == NULL)
		return (0);
	bytesRead = read(desc, buffer, letters);
	buffer[bytesRead] = '\0';
	write(STDOUT_FILENO, buffer, bytesRead);
	close(desc);
	free(buffer);
	return (bytesRead);
}
