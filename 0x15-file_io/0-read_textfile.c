#include "main.h"
/**
 * read_textfile - reads a file
 * @filename: name of the file pointer
 * @letters: numbers of letters should be written
 * Return: 0 if any failure happens number of letters printed otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buff = malloc(letters + 1);
	ssize_t sizeofbuff;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fclose(fp);
		return (0);
	}
	if (buff == NULL)
	{
		return (0);
	}
	sizeofbuff = fread(buff, 1, letters, fp);
	if (sizeofbuff == -1)
	{
		free (buff);
		fclose(fp);
		return (0);
	}
	printf("%s", buff);
	fclose(fp);
	free (buff);
	return (sizeofbuff);
}

