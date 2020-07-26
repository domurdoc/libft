/*
** DESCRIPTION
** The ft_strnew() function allocates (with malloc(3)) and returns a "fresh"
** string ending with '\0'. Each character of the string is initialized at '\0'.
**
** RETURN VALUE
** The ft_strnew() function returns a pointer to the string.
**
** COMMENT
** If the allocation fails or if size equal to SIZE_MAX (stdint.h) the function
** returns NULL (as size + 1 = 0 passed to ft_memalloc() which will return
** NULL). If size is equal to zero a one byte ('\0') string will be created.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}
