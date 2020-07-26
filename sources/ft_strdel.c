/*
** DESCRIPTION
** The ft_strdel() function frees the string pointed to by as and puts as to
** NULL.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** The behavior is identical to ft_memdel().
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void**)as);
}
