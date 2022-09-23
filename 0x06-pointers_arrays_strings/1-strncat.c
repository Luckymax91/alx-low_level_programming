#include "main.h"
 /** 
  * _strncat - Concatenates two stirngs
  * @dest: The destination value
  * @scr: The source value
  * @n: The limit of the concatenation
  *
  * Reutrn: A pointer the resulting string dest
  */
char *_strncat(char *dest, char *scr, int n)

{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && scr[j])
	{
		dest[dlen] = sc[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

