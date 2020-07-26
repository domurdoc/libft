/*
** DESCRIPTION
** The ft_putendl_fd() function ouputs the string s to the file descriptor fd
** adding '\n' after it.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** If s points to NULL, the functions does nothing.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
