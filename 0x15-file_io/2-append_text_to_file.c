
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text_file;
	ssize_t len = 0, inlength = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	text_file = open(filename, O_WRONLY | O_APPEND);
	if (text_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlength = 0, ptr = text_content; *ptr; ptr++)
			inlength++;
		len = write(text_file, text_content, inlength);
	}

	if (close(text_file) == -1 || inlength != len)
		return (-1);
	return (1);
}
