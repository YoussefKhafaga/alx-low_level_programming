#include "main.h"

/**
 * create_file - writes to a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
	{
		close(fp);
		return (-1);
	}
	if (text_content != NULL)
	{
		fp = write(fp, text_content, strlen(text_content));
		if (fp == -1)
		{
			close(fp);
			return (-1);
		}
	}
	return (1);
}

