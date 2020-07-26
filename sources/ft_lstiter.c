/*
** DESCRIPTION
** The ft_lstiter() function iterates the list lst and applies the function f to
** each link.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** If lst or f points to NULL, the function does nothing.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *b;

	if (f)
		while (lst)
		{
			b = lst->next;
			f(lst);
			lst = b;
		}
}
