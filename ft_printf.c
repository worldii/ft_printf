/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:37:01 by jonghapa          #+#    #+#             */
/*   Updated: 2022/01/07 01:47:36 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfchar(const char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int ft_printfstr(char *)
{

}

int	ft_printfptr(unsigned long long)
{

}

int	ft_printfhex(unsigned int)
{

}

int ft_printfstr(char *str)
{

}

int ft_printfnbr(int nbr)
{

}

int ft_printfunbr(unsigned int nbr)
{

}

int	check_type(const char c, va_list ap)
{
	if (c == 'c')
		return (ft_printfchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_printfstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printfnbr(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_printfunbr(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printfhex(va_arg(ap, unsigned int)));
	else if (c == 'p')
		return (ft_printfptr(va_arg(ap, unsigned long long)));
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
			len += check_type(format[i + 1], ap);
			i++;
		}
		else
		{
			len += ft_printchar(format[i]);
		}
	}
	va_end(ap);
	return (len);
}
