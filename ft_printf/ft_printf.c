/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashakhky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 18:43:02 by ashakhky          #+#    #+#             */
/*   Updated: 2021/06/15 20:11:27 by ashakhky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// %[parameter][flags][width][.precision][length]type
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"


int ft_printf(char* str ,...)
{
	va_list args;
	va_start(args, str);
	int pos;
	
    pos = 0;
	while(str[pos] != '%')
		pos++;
	pos++;
	write(1,&str[pos],1);

	// int i = 0;
	// while(*(str + i))
	// {
	// 	if(*(str+i) != '%')
	// 	{

	// 	}
	// 	write(1,(str+i),1);
	// 	i++;
	// }
	//va_end(args);
	return 0;
}
char flaglist(char c)
{
	return((c == '0') || (c == '.') || (c == '*') || (c == '-'));
}
// char *typelist(char type)
// {
// 	return((type == 'c') || (type == 's') || (type == 'p') || (type == 'd') || (type == 'i')
// 			|| (type == 'u') || (type == 'x') || (type == 'X') || (type == '%'));
// }


