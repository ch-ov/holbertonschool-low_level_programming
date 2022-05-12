#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: A NULL terminated string to add at the end of the file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	int state;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	state = write(fd, text_content, i);
	if (state == -1)
		return (-1);

	close(fd);
	return (1);
}
