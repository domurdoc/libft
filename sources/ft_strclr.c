/*
** DESCRIPTION
** The ft_strclr() function clears the string s by filling it with '\0'.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** If s points to NULL, nothing happens.
*/

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}
