#include "main.h"

/**
 * str_len - a function that returns the lenght of a string
 * @s: the string to chck the length
 * Return: the length of the string
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * append_text_to_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_reader_open, file_reader_write, num;

	if (filename == NULL)
		return (-1);

	file_reader_open = open(filename, O_WRONLY | O_APPEND, 0600);
	if (file_reader_open == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	num = str_len(text_content);
	if (file_reader_open == -1)
		return (-1);

	file_reader_write = write(file_reader_open, text_content, num);
	close(file_reader_open);

	if (file_reader_write == -1)
		return (-1);
	return (1);
}
