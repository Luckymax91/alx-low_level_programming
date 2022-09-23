#include "main.h"
#include <stdio.h>
 /**
  * _strcat - Concatenates two strings
  * @dest: The destinations string
  * @scr: The source string
  *
  * Retun: A pointer to the resulting strinig dest
  */
 char *_strcat(char *dest, char *scr)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; scr[i] != 0; i++)
	{
		dest[dlen] = scr[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

