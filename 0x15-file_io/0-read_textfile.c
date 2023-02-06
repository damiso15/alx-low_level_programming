#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: is the name of the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_reader_open, file_reader_read, file_reader_write;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	file_reader_open = open(filename, O_RDONLY);
	if (file_reader_open < 0)
	{
		free(buff);
		return (0);
	}

	file_reader_read = read(file_reader_open, buff, letters);
	if (file_reader_read < 0)
	{
		free(buff);
		return (0);
	}
	file_reader_write = write(STDOUT_FILENO, buff, file_reader_read);
	free(buff);
	close(file_reader_write);

	if (file_reader_write < 0)
		return (0);
	return ((ssize_t)file_reader_write);
}
