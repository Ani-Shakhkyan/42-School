#include <unistd.h>
#include "printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char* convert_to_lower(char *str)
{
    size_t i = 0;
    while(i < ft_strlen(str)){
        str[i] = ft_tolower(str[i]);
        i++;
    }
    return str;
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
char* treat_pointer(va_list args)
{
    char *str;
    long long int adress;
    char *adddress;
    int* adr;
    adr = va_arg(args,int*);
    str = "0x";
    adress = (long long int)adr;
    adddress = ft_atoi_base(adress,16);
    adddress = convert_to_lower(adddress);
    adddress = ft_strjoin(str,adddress);
    return adddress;
} 

int variadic(char *str,...)
{
    char *str;

    printf("%s\n",str);
    va_list args;
	va_start(args, str);
    str = treat_pointer(args);
    return (int)ft_strlen(str);
}
int main()
{
    int m = 7;
    printf("adress in main : %p \n",&m);
    variadic("hello",&m);
    return 0;
}