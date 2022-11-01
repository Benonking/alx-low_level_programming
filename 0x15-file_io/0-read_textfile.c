#include "main.h"

/**
 * read_textfile - read text file and print it to stdout
 * @filename: filename
 * @letters: number of leters to read and print
 *
 * Return: 0 if file cant be read or NULL else pritnc contents
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*file discriptor*/
	size_t readd, writee;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);/*open file*/
	/*check if file can be opened*/
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	readd = read(fd, buffer, letters);
	if (readd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/*write*/

	writtee = write(STDOUT_FILENO, buffer, readd);
	if (writtee == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (readd);
}
