#include "main.h"
/**
 * read_textfile - reads a file
 * @filename: name of the file pointer
 * @letters: numbers of letters should be written
 * Return: 0 if any failure happens number of letters printed otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buff = malloc(letters + 1);
	ssize_t sizeofbuff;

	if (buff == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		free(buff);
		return (0);
	}
	sizeofbuff = read(fp, buff, letters);
	if (sizeofbuff == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}
	write(STDOUT_FILENO, buff, sizeofbuff);
	close(fp);
	free(buff);
	return (sizeofbuff);
}

