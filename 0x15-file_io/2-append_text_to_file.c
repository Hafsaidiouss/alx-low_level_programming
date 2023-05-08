#include "main.h"
/**
 * append_text_to_file - that appends text at the end of a fil
 * @filename:  the name of the file
 * @text_content: s the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
	}
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
