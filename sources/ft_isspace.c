/*
** DESCRIPTION
** The ft_isspace() function checks for white-spaces character (space, form-feed
** '\f', newline '\n', carriage return '\r', horizontal tab '\t', vertical tab
** '\v'.
**
** RETURN VALUE
** The ft_isspace() function returns a non zero value if the character c is a
** white-space character, and zero if not.
**
** COMMENT
** Only C locale.
*/

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
