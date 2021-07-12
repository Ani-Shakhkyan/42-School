#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>

typedef struct
{
	int	minus;
	int	dot;
	int	zero;
	int	star;
	int	min_wid;
	int width; // before dot
	int len; // after dot
	char specifier;
} flags;
int		ft_atoi(const char *str);
int		ft_isdigit(int c);

#endif