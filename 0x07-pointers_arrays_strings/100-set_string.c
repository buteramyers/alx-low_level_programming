#include "main.h"

/**
 * set_string - change the value of a pointer
 * @s: pointer to be changed
 * @to: pointer holding the needed value
 * return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
