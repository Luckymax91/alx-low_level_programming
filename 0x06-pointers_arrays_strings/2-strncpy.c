#include "main.h"

 /**
  * _strncopy - Copy a string
  * @dest: The destination value 
  * @scr: The source value
  * @n: The copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *scr, int n)

{
	int a = 0, b = 0;

	while (scr[b])
	{
		b++;
	}

	while (a < n && scr[a])
	{
		dest[a] = scr[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

