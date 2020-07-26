/*
** DESCRIPTION
** The ft_strchr() function looks for the first occurence of character c in the
** string pointed by s.
**
** RETURN VALUE
** The ft_strchr() function returns a pointer to the matched character or NULL
** if the character is not found.
**
** COMMENT
** "Character" means "byte". The terminating null byte is considered part of the
** string, so that if c is specified as '\0', this function returns a pointer to
** the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s && *s != ch)
		s++;
	return (*s == ch ? (char*)s : NULL);
}
