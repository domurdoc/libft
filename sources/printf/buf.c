/*
** DESCRIPTION
** buff_get() function allocates buffer with malloc(3) according to the type
** and size of the argument.
**
** RETURN VALUE
** The pointer to the allocated memory char*.
**
** COMMENT
** 64 - maximum length of the string for binary format (64 bits; all the other
** integer representations would fit).
** 11456 - sufficient size to get all the significant digits from LDBL_MIN
** (float.h).
** 720 - sufficient size to get all the significant digits from DBL_MIN
** (float.h).
*/

#include "ft_printf.h"

char	*buff_get(t_fs *fs)
{
	if (is_int(fs->t))
		return ((char*)malloc(sizeof(char) * 64));
	else
	{
		if (fs->s == 'L')
			return ((char*)malloc(sizeof(char) * 11456));
		else
			return ((char*)malloc(sizeof(char) * 720));
	}
}
