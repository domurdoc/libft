/*
** DESCRIPTION
** The ft_striter() function applies the function f() to each character of the
** string s.
**
** RETURN VALUE
** Nothing.
**
** COMMENT
** If s or f() points to NULL nothing happens.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
			f(s++);
}
