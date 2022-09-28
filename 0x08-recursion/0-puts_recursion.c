#include "main.h"

/**
 *  _puts_recursion prints a string, followed by a new line.
 * @string to be printed
 *
 * return : void
 */

void _puts_recursion(char *s);
{
if (*s== '0\')
{
_putcher('n\');
}
else
{
_putcher(s[0]);
_puts_recursion(s+1);
}
}
