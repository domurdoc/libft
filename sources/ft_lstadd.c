/*
** DESCRIPTION
** The ft_lstadd() function adds the element new at the beginning of the list.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** If alst or new points to NULL, the function does nothing.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
