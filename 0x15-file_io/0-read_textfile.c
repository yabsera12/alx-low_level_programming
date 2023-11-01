#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fileread, filewrite;
	char *tSize;

	tSize = malloc(sizeof(char) * letters);
	if (tSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fileread = read(file, tSize, letters);
	if (fileread == -1)
		return (0);
	filewrite = write(STDOUT_FILENO, tSize, fileread);
	if (filewrite == -1)
		return (0);
	close(file);
	free(tSize);
	return (filewrite);
}
