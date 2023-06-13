#include "main.h"
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be written
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int desc;
	size_t text_len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		text_len = strlen(text_content);
	desc = open(filename, (O_WRONLY | O_APPEND));
	if (desc == -1)
		return (-1);
	if (text_len > 0)
	{
		bytes_written = write(desc, text_content, text_len);
		if (bytes_written == -1)
		{
			close(desc);
			return (-1);
		}
	}
	close(desc);
	return (1);
}
