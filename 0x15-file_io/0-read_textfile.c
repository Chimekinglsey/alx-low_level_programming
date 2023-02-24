#include "main.h"
#include <stdio.h>

/**
* read_textfile - This function reads a text file and writes it.
*
* @filename: name of file to read
*
* @letters: number of letters to read and print
*
* Return: number of letters read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, rd, wr;
char *buffer = malloc(sizeof(char) * letters);
if (filename == NULL)
	return (0);

op = open(filename, O_RDONLY);
if (op == -1)
	return (0);

rd = read(op, buffer, letters);
if (rd == -1)
	return (0);

wr = write(STDOUT_FILENO, buffer, rd);
if (wr == -1)
	return (0);
free(buffer);
close(op);
return (wr);
}
