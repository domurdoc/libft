/*
** DESCRIPTION
** The ft_putendl() function ouputs the string s to the standard output adding
** '\n' after it.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** The ft_putendl() is ft_putendl_fd() with fd equal to 1.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}
