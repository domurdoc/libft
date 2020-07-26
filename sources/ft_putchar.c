/*
** DESCRIPTION
** The ft_putchar() function ouputs the character c to the standard output.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** The ft_putchar() is ft_putchar_fd() with fd equal to 1.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
