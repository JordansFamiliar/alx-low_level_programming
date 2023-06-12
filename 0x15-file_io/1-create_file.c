#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - a function that creates a file
 * @filename: name of file
 * @text_content; text to be written
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_Written;
	mode_t filePerms = S_IRUSR | S_IWUSR;
	int desc;
	size_t text_len = strlen(text_content);

	if (access(filename, F_OK) != -1)
		filePerms = 0;
	if (filename == NULL)
		return (-1);
	desc = open(filename, (O_WRONLY | O_CREAT | O_TRUNC), filePerms);
	bytes_Written = write(desc, text_content, text_len);
	if (bytes_Written == -1)
		return (-1);
	close(desc);
	return (1);
}
