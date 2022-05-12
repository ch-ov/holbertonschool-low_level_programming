#include "main.h"
#define SF STDERR_FILENO
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Arguments of String
 * Return: int
 */
int main(int argc, char *argv[])
{
	int inputFD, outputFD, inputState, outputState;
	char buff[1024];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(SF, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
	{
		dprintf(SF, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (outputFD == -1)
	{
		dprintf(SF, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		inputState = read(inputFD, buff, 1024);
		if (inputState == -1)
		{
			dprintf(SF, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (inputState > 0)
		{
			outputState = write(outputFD, buff, (ssize_t)inputState);
			if (outputState == -1)
			{
				dprintf(SF, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (inputState > 0);
	inputState = close(inputFD);
	if (inputState == -1)
	{
		dprintf(SF, "Error: Can't close fd %d\n", inputFD);
		exit(100);
	}
	outputState = close(outputFD);
	if (outputState == -1)
	{
		dprintf(SF, "Error: Can't close fd %d\n", outputFD);
		exit(100);
	}
	return (0);
}
