#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_written, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* Get length of text content */
		while (*(text_content + text_len))
			text_len++;
	}

	/* Open file for writing, create if it doesn't exist, truncate if it does */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Write text content to file if it exists */
	if (text_content != NULL)
	{
		num_written = write(fd, text_content, text_len);
		if (num_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
