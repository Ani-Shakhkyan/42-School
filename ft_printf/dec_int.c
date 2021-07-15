#include <stdarg.h>
#include "ft_printf.h"

#include <unistd.h>
#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*join_str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(join_str = malloc(sizeof(*s1) * len + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		join_str[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		join_str[i++] = s2[j++];
	}
	join_str[i] = 0;
	return (join_str);
}

char* ft_atoi_base(unsigned long long int number, int base)
{
    char *base_rep;
    int base_len;
    unsigned long long int num_copy;

    num_copy = number;
    base_len = 0;
    while(number >= 1)
    {
        number/= base;
        base_len++;
    }
    base_rep = (char *) malloc(base_len * sizeof(char) + 1);
    base_rep[base_len] = '\0';
    base_len--;
    while (base_len >= 0){
        if (num_copy % base < 10) 
            base_rep[base_len] = num_copy % base + 48;
        else
            base_rep[base_len] = num_copy % base + 55;
        base_len--;
        num_copy/=base;
    }
    return (base_rep);
}

int treat_dec(va_list args)
{
    int num;
    char* str_num;
    int is_minus;

    size_t i;
    size_t len;
    i = 0;
    num = va_arg(args,int);
    if(num < 0)
    {
        is_minus = 1;
        num *= -1;
    }
    str_num = ft_atoi_base(num,10);
    if(is_minus)
        str_num = ft_strjoin("-",str_num);
    len = ft_strlen(str_num);
     while(i < len){
        write(1,&str_num[i],1);
        i++;
    }
    free(str_num);
    return 0;
}
int variadic(char *str,...)
{
    va_list args;
	va_start(args, str);
    treat_dec(args);
    return 0;
}
int main()
{
    variadic("hello",-244452);
    return(0);
}