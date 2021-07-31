#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
char	*ft_ull_base(unsigned long long ull, int base);
char	*convert_to_lower(char *str);
void	treat_pointer(va_list args, int *counter);
void	treat_hex_lowercase(va_list args, int *counter);
void	treat_hex_uppercase(va_list args, int *counter);
void	treat_dec(va_list args, int *counter);
void	treat_unsigned(va_list args, int *counter);
int		treat_string(va_list args, int *counter);
void	treat_char(va_list args, int *counter);
void	treat_percent(int *counter);

#endif
