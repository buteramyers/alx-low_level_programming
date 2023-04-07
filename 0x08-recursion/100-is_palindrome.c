#include "main.h"
#include <string.h>

/**
 * check_text - run though the text forward and backward
 * @s: string value
 * @begin: run through text in the forward direction
 * @end: run through text in the backward direction
 * Return: 0 or 1
 */
int check_text(char *s, int begin, int end)
{
	if (begin >= end)
		return (1);
	if (s[begin] != s[end])
		return (0);
	return (check_text(s, begin + 1, end - 1));
}

/**
 * is_palindrome - check if the number is palindrome
 * @s: string value
 * Return: 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (s[0] == '\0')
		return (1);
	return (check_text(s, 0, length - 1));
}
