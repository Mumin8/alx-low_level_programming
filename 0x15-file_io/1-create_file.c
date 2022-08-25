#include "main.h"
#include <stdlib.h>
/**
 * create_file -  the function to create a file
 *
 * @filename: the name of the file to create
 * @text_content: the content to write to the text file
 * Return: 1 on success of -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, fdw;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	fdw = write(fd, text_content, len);
	if (fdw == -1)
		return (-1);
	close(fd);


	return (1);
}
