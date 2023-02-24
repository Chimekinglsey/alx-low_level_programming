#include "main.h"
#include <stdio.h>

/**
* append_text_to_file - This function appends text to existing file.
*
* @filename: name of file to create
*
* @text_content: number of letters to read and print
*
* Return: 1 on succes and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)

{
int op, wr, len = strlen(text_content);
if (filename == NULL)
	return (-1);

if (text_content == NULL)
	len = 0;

op = open(filename, O_WRONLY | O_APPEND);
wr = write(op, text_content, len);
if (op == -1 || wr == -1)
	return (-1);

close(op);
return (1);
}
