/*
** DESCRIPTION
** The ft_strlcat() function appends the src string to the dst string, taking
** the full size of the buffer dst and guaranteeing to NULL-termintate the
** result as long as there is at least one byte free in dst.
**
** RETURN VALUE
** The ft_strlcat() function returns the total length of the string it tries to
** create.
**
** COMMENT
** The strings must be NULL-terminated. Size should be described as
** sizeof(dst[...]).
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t d;
	size_t s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (size + s);
	ft_strncat(dst, src, size - d - 1);
	return (s + d);
}
