/*
** DESCRIPTION
** The ft_isalpha() function checks c for an alphabetic character.
**
** RETURN VALUE
** The ft_isalpha() function returns a non zero value if the character c is an
** alphabetic character, and zero if not.
**
** COMMENT
** Only C locale.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
