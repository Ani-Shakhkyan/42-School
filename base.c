#include "ft_printf.h"

char* ft_atoi_base(unsigned long long int number, int base)
{
    char *base_rep;
    int base_len;
    unsigned long long int num_copy;
    unsigned int remainder = 0;
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
    while(base_len >= 0){
        remainder = num_copy % base;
        if(num_copy % base < 10) 
             base_rep[base_len] = remainder + 48;
        else
            base_rep[base_len] = remainder + 55;
        base_len--;
        num_copy/=base;
    }
    return base_rep;
}