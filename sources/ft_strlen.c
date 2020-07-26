/*
** DESCRIPTION
** The ft_strlen() function calculates the length of the string pointed to by s,
** excluding the terminating null byte ('\0').
**
** RETURN VALUE
** The ft_strlen() function returns the number of characters in the string
** pointed to by s.
**
** COMMENT
** If s points to NULL, the behavior is undefined.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*tmp;

	tmp = s;
	while (*tmp)
		tmp++;
	return (tmp - s);
}
