#include "main.h"
#include <stdio.h>

/**
* create_file - This function creates a text file and writes strings to it.
*
* @filename: name of file to create
*
* @text_content: number of letters to read and print
*
* Return: 1 on succes and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int op, wr, len = strlen(text_content);
char *buffer = malloc (sizeof(char) * len);

if (filename == NULL)
	return (-1);

if (text_content == NULL)
	{	
		op = open(filename, O_CREAT | O_RDWR |O_TRUNC, 0600);
		return (1);
		EXIT_FAILURE;
	}

op = open(filename, O_CREAT | O_RDWR |O_TRUNC, 0600);
wr = write(op, buffer, len);
if (op == -1 || wr == -1)
	return (-1);

close(op);
return (1);
}
