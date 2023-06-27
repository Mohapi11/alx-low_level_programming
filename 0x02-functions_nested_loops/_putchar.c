#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes that character c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
