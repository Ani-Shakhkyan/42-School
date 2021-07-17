#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "libft/libft.h"


char* ft_atoi_base(unsigned long long int number, int base);
char* convert_to_lower(char *str);
char* treat_pointer(va_list args);
int treat_hex_lowercase(va_list args);
int treat_hex_uppercase(va_list args);
int treat_dec(va_list args);
int treat_unsigned(va_list args);

#endif