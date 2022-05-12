#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int state;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;

		state = write(fd, text_content, i);
		if (state == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
