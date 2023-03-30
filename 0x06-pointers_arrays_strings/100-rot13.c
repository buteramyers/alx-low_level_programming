#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string parameters
 * Return: pointer s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == datarot[j])
		{
			s[i] = datarot[j];
			break;
		}
	}
	return(s);
}
