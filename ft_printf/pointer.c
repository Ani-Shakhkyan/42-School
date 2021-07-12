#include <unistd.h>
#include "printf.h"
#include <stdio.h>
#include <stdarg.h>

int treat_pointer(va_list args)
{
    printf("in treat_pointer\n");
    
    int* adr = va_arg(args,int*);
    long long int adress = (long long int)adr;
    printf("value of va_list consicutive member: %d\n",*adr);
    printf("%p\n",adr);
    printf("with X : %lld\n",adress);
    return 0;
} 
int variadic(char *str,...)
{
    printf("%s\n",str);
    va_list args;
	va_start(args, str);
    treat_pointer(args);
    return 0;
}
int main()
{
    int m;
    printf("adress in main : %p \n",&m);
    variadic("hello",&m);
    return 0;
}