#ifndef GNL_H
# define GNL_H

# define BUFF_SIZE	4096
# define FD			((t_fd*)bf->cur->data)
# define SNPH		((t_snip*)FD->snips.head->data)
# define SNPT		((t_snip*)FD->snips.tail->data)
# define FD_LINE	((t_fd*)bf.cur->data)->line

# define EOL		'\n'

# define ERROR		-1
# define EOF		0
# define OK			1

typedef struct		s_fd
{
	int				fd;
	char			*line;
	t_lst_ht		snips;
}					t_fd;

typedef struct		s_snip
{
	ssize_t			len;
	size_t			offset;
	char			str[BUFF_SIZE];
}					t_snip;

#endif
