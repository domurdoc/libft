#ifndef LST_H
# define LST_H

typedef struct		s_lst
{
	void			*data;
	struct s_lst	*next;
}					t_lst;

typedef struct		s_lst_ht
{
	size_t			len;
	t_lst			*head;
	t_lst			*tail;
}					t_lst_ht;

typedef struct		s_dlst
{
	void			*data;
	struct s_dlst	*next;
	struct s_dlst	*prev;
}					t_dlst;

typedef struct		s_dlst_cir
{
	size_t			len;
	t_dlst			*cur;
}					t_dlst_cir;

t_lst				*lst_new(void *data);
void				lst_add(t_lst **first, t_lst *new);
void				lst_add_after(t_lst *prev, t_lst *new);
void				lst_del(t_lst **first, void (*del)(void*));

int					lst_ht_push(t_lst_ht *x, void *data);
int					lst_ht_push_back(t_lst_ht *x, void *data);
void				*lst_ht_pop(t_lst_ht *x);
void				lst_ht_del(t_lst_ht **x, void (*del)(void*));

t_dlst				*dlst_new(void *data);
void				dlst_add_before(t_dlst *cur, t_dlst *new);
void				dlst_add_after(t_dlst *cur, t_dlst *new);
void				dlst_disconnect(t_dlst *cur);
void				dlst_del(t_dlst **head, void (*del)(void*));

void				dlst_init(t_dlst_cir *x);
int					dlst_cir_push(t_dlst_cir *x, void *data);
void				*dlst_cir_pop(t_dlst_cir *x);

#endif