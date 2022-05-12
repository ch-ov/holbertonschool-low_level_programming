#include "main.h"
/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 * @filename: Char pointer to file
 * @letters: Number of letters it should read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t readCount;
	ssize_t writeCount;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	readCount = read(fd, buff, letters);
	if (readCount == -1)
		return (0);

	writeCount = write(STDOUT_FILENO, buff, readCount);
	if (writeCount == -1 || readCount != writeCount)
		return (0);
	free(buff);

	close(fd);
	return (readCount);
}
