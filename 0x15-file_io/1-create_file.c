#include "main.h"


/**
 * create_file - int func
 * @filename: param
 * @text_content: param
 * Return: 1 or 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nletters = 0, rwr;

	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (fd == -1)
		{
			return (-1);
		}
		if (!text_content)
		{
			text_content = "";
		}
		while (text_content[nletters])
		{
			nletters++;
		}
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
		{
			return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
