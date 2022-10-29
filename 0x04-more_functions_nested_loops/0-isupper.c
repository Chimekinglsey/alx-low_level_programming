#include "main.h"
/**
 *  * _isupper - checks wether an alphabet is Upper
 *
 *  @c: The intake string
 *
 *   * Return: 1 for success and 0 for failure
 *
 **/
int _isupper(int c)
{
int state;
char upper[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	if (c == upper[0] || c == upper[1] || c == upper[2] || c == upper[3] || c == upper[4] || c == upper[5] || c == upper[6] || c == upper[7] || c == upper[8] || c == upper[9] || c == upper[10] || c == upper[11] || c == upper[12] || c == upper[13] || c == upper[14] || c == upper[15] || c == upper[16] || c == upper[17] || c == upper[18] || c == upper[19] || c == upper[20] || c == upper[21] || c == upper[22] || c == upper[23] || c == upper[25] || c == upper[25])
	{
		state = 1;
	}
	else
	{
		state = 0;
	}
return (state);
}
