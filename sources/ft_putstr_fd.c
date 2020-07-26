/*
** DESCRIPTION
** The ft_putstr_fd() function ouputs the string s to the file descriptor fd.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** If s points to NULL, the function does nothing.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
