.PHONY: all clean fclean re

NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror -g

SRCS_NAMES = ft_atoi.c \
	ft_atoi_base.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isbasedigit.c \
	ft_isblank.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_isxdigit.c \
	ft_itoa.c \
	ft_log2.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_realloc.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c

LINT_SRCS_NAMES = lint_basic.c \
	lint_cmp.c \
	lint_add.c \
	lint_sub.c \
	lint_mul.c \
	lint_div.c \
	lint_shift.c \
	lint_output_fd.c \
	lint_output_str.c \
	lint_input.c \
	lint_exp.c

GNL_SRCS_NAMES = gnl.c

LST_SRCS_NAMES = dlst.c \
	dlst_cir.c \
	lst.c \
	lst_ht.c

INCLUDES_NAMES = libft.h \
	lint.h \
	gnl.h \
	lst.h

INCLUDES_DIR = ./includes
INCLUDES = $(addprefix $(INCLUDES_DIR)/,$(INCLUDES_NAMES))

SRCS_DIR = sources
OBJS_DIR = objects
SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_NAMES))
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS_NAMES:.c=.o))

#lint
LINT_SRCS_DIR = sources/lint
LINT_SRCS = $(addprefix $(LINT_SRCS_DIR)/, $(LINT_SRCS_NAMES))
LINT_OBJS = $(addprefix $(OBJS_DIR)/, $(LINT_SRCS_NAMES:.c=.o))

#gnl
GNL_SRCS_DIR = sources/gnl
GNL_SRCS = $(addprefix $(GNL_SRCS_DIR)/, $(GNL_SRCS_NAMES))
GNL_OBJS = $(addprefix $(OBJS_DIR)/, $(GNL_SRCS_NAMES:.c=.o))

#lst
LST_SRCS_DIR = sources/lst
LST_SRCS = $(addprefix $(LST_SRCS_DIR)/, $(LST_SRCS_NAMES))
LST_OBJS = $(addprefix $(OBJS_DIR)/, $(LST_SRCS_NAMES:.c=.o))

#color
GREEN = \033[0;32m
RED = \033[0;31m
EOC = \033[m

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(NAME): $(OBJS) $(LINT_OBJS) $(GNL_OBJS) $(LST_OBJS)
	@ar rc $(NAME) $(OBJS) $(LINT_OBJS) $(GNL_OBJS) $(LST_OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)$(NAME) created$(EOC)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES)
	$(CC) $(FLAGS) -I $(INCLUDES_DIR) -o $@ -c $<

$(OBJS_DIR)/%.o: $(LINT_SRCS_DIR)/%.c $(INCLUDES)
	$(CC) $(FLAGS) -I $(INCLUDES_DIR) -o $@ -c $<

$(OBJS_DIR)/%.o: $(GNL_SRCS_DIR)/%.c $(INCLUDES)
	$(CC) $(FLAGS) -I $(INCLUDES_DIR) -o $@ -c $<

$(OBJS_DIR)/%.o: $(LST_SRCS_DIR)/%.c $(INCLUDES)
	$(CC) $(FLAGS) -I $(INCLUDES_DIR) -o $@ -c $<

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
