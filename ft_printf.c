/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:37:01 by jonghapa          #+#    #+#             */
/*   Updated: 2022/03/05 17:28:38 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfchar(const char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	check_type(const char c, va_list ap)
{
	if (c == 'c')
		return (ft_printfchar(va_arg(ap, int)));
	else if (c == 's')
		return (ft_printfstr(va_arg(ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printfhex(va_arg(ap, int),c));
	else if (c == 'u')
		return (ft_printfhex(va_arg(ap, unsigned int),c));
	else if (c == 'x' || c == 'X')
		return (ft_printfhex(va_arg(ap, unsigned int), c));
	else if (c == 'p')
		return (ft_printfptr(va_arg(ap, unsigned long long)));
	else if (c == '%')
		return (ft_printfchar('%'));
	return (0);
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
		if (format[i] == '%')
		{
			len += check_type(format[i + 1], ap);
			i++;
		}
		else
		{
			len += ft_printfchar(format[i]);
		}
	}
	va_end(ap);
	return (len);
}
