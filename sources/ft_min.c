/*
** DESCRIPTION
** The ft_min() function compares integers of size 4 bytes and returns the least
*/

#include <stdint.h>

int32_t	ft_min(int32_t a, int32_t b)
{
	return (a < b ? a : b);
}
