#include "ft_printf.h"

int treat_character(va_list args)
{
    char character = va_arg(args,char);
    write(1,character,1);
}