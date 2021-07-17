#include "ft_printf.h"


char* num_to_str(unsigned int number)
{
    char* rtn;
    int i;
    int len;
    int num_copy;

    i = 0;
    len = 0;
    power = 10;
    num_copy = number;
    while(number >= 1){
        number /=10;
        len++;
    }
    while(/* condition */){
        /* code */
    }
    
    while(len--){
        power*=10;
    }
      
}

int treat_unsigned(va_list args)
{
    unsigned int num;
    char* str_num;
    int is_minus;
    size_t i;
    size_t len;

    i = 0;
    num = va_arg(args,unsigned int);
    
   
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
    treat_unsigned(args);
    return 0;
}
int main()
{
    // unsigned int num = -244452;
    // //printf("%u\n",num);
    // variadic("hello",-244452);
    printf("worked");
    return(0);
}