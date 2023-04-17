#include "main.h"

/**
 * wildcmp - compare two strings and check if they are identical
 * @s1: string value
 * @s2: string that can contain special characters
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{

	if (s1 == '\0' && s2 == '\0')
	{
		return (1);
	}
	if (s2 == "*")
	{
		return (wildcmp(s1, s2 + 1));
	}
	if (s1 != s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
