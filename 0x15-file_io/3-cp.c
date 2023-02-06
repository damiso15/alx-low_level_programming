#include "main.h"

/**
 * copy_from_file_to_file - a function that creates a file
 * @file1: the name of the file to create
 * @file2: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int copy_from_file_to_file(const char *file1, const char *file2)
{
	int file_reader_open_file1, file_reader_open_file2;
	ssize_t file_reader_read, file_reader_write;
	char buff[1024];

	file_reader_open_file1 = open(file1, O_RDONLY);
	if (file_reader_open_file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	file_reader_open_file2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_reader_open_file2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	file_reader_read = read(file_reader_open_file1, buff, 1024);
	if (file_reader_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	file_reader_write = write(file_reader_open_file2, buff, file_reader_read);
	if (file_reader_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	if (close(file_reader_open_file1) == -1)
	{
		dprintf(2, "Error: Can't close %d\n", file_reader_open_file1);
		exit(100);
	}
	if (close(file_reader_open_file2) == -1)
	{
		dprintf(2, "Error: Can't close %d\n", file_reader_open_file2);
		exit(100);
	}
	return (1);
}

/**
 * main - check the code
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int copy;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy = copy_from_file_to_file(argv[1], argv[2]);
	printf("Copy done %d\n", copy);
	return (0);
}
