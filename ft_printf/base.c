#include "ft_printf.h"
#include <stdlib.h>

char* ft_atoi_base(int number, int base)
{
    char *base_rep;
    int base_len;
    int num_copy;

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
        if(num_copy % base < 10)
            base_rep[base_len] = num_copy % base + 48;
        else
            base_rep[base_len] = num_copy % base + 55;
        base_len--;
        num_copy/=base;
    }
    return base_rep;
}   
    int main()
    {
        int n = 132345;
        char* hex;
        hex = ft_atoi_base(n,2);
        printf("%s",hex);
    }

