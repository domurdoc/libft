#ifndef FS_H
# define FS_H
# include "ft_printf.h"

bool	fs_flags(const char **fmt, t_fs *fs);
bool	fs_width(const char **fmt, t_fs *fs, va_list ap);
bool	fs_precision(const char **fmt, t_fs *fs, va_list ap);
bool	fs_size(const char **fmt, t_fs *fs);
bool	fs_type(const char **fmt, t_fs *fs);
bool	fs_color(const char **fmt, t_fs *fs);

#endif
