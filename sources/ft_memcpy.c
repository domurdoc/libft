/*
** DESCRIPTION
** The ft_memcpy() function copies n bytes from memory area src to memory area
** dst. The memory areas must not overlap when src < dst.
**
** RETURN VALUE
** The ft_memcpy() function returns a pointer to dst.
**
** COMMENT
** If one and only one of the pointers is NULL the behavior is undefined. If
** both of them are NULL the ft_memcpy() just returns NULL.
** (the conditions above were used to meet the 42-FileChecker requirements)
** If n is equal to zero the function does nothing.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char*)dst;
	s = (unsigned const char*)src;
	if (s || d)
		while (n-- > 0)
			*d++ = *s++;
	return (dst);
}
