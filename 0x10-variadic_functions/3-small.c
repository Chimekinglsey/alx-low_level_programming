#include "variadic_functions.h"
/**
* print_all - puts out all defined
*
*@format: input format of string
*
* Return - nothing
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
	continue;

	while (format[i])
		switch (format[i])
		{
		case 'c':
		printf("%c", (char) va_arg(ap, int));
		break;
		case 'i':
		printf("%d", va_arg(ap, int));
		break;
		case 'f':
		printf("%f", (float) va_arg(ap, double));
		break;
		case 's':
			string = va_arg(ap, char *);
			if (*string != '\0')
			{
			printf("%s", string);
			break;
			}
			printf("(nil)");
			break;
		}
	if (string == NULL)
	printf("(nil)");

		}
	printf("\n");
	va_end(ap);
}
