/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:37:01 by jonghapa          #+#    #+#             */
/*   Updated: 2022/01/06 18:39:45 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printChar(const char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int check_type (const char c, va_list ap)
{
	if (c == 'c')
		return (ft_printChar(va_arg(ap, int));	
	else if (c == 's')
		return (ft_printStr(va_arg(ap, char *));
	else if (c == 'd')
	else if (c == 'i')
	else if (c == 'u')
	else if (c == 'x')
	else if (c =='X')
}
int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;
	int		i;

	va_start(ap, format);
	len = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] == "%")
		{
			len += check_type(format[i+1], ap);
			i++;
		}
		else
		{
			len += ft_printChar(format[i]);
		}
	}
	va_end(ap);
	return (len);
}
