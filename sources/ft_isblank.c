/*
** DESCRIPTION
** The ft_isblank() function checks for a blank character (space and horizontal
** tab '\t').
**
** RETURN VALUE
** The ft_isblank() function returns a non zero value if the character c is a
** blank character, and zero if not.
*/

int		ft_isblank(int c)
{
	return (c == 9 || c == 32);
}
