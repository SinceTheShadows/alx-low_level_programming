#include "main.h"
/**
 * check the char if its upercase or not
 * and return 1 if its upercase and 0 if its not
 *
 */

int _isupper(int c)
{
  if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
