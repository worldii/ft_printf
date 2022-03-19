/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfmix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapark <jonghapark@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:38:23 by jonghapa          #+#    #+#             */
/*   Updated: 2022/03/20 01:26:45 by jonghapark       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printfhex(unsigned int nbr, const char type)
{
	int len;

	if (type == 'u')
	{
		ft_putnbr_base(nbr, "0123456789");
		return (ft_base_strlen(10, nbr, 1));
	}
	if (type == 'X')
		ft_putnbr_base(nbr, "0123456789ABCDEF");
	else
		ft_putnbr_base(nbr, "0123456789abcdef");
	len = ft_base_strlen(16, nbr, 1);
	return (len);
}

int ft_printfnbr(int nbr)
{
	int len;
	char *str;

	str = ft_itoa(nbr);
	len = ft_strlen(str);
	ft_putnbr_base(nbr, "0123456789");
	free(str);
	return (len);
}

void ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchar_fd('0' + ptr, 1);
		else
			ft_putchar_fd(ptr - 10 + 'a', 1);
	}
}

int ft_printfptr(unsigned long long ptr)
{
	int len = 2;

	ft_putstr_fd("0x", 1);
	len += ft_base_strlen(16, ptr, 0);
	ft_putptr(ptr);
	return (len);
}

int ft_printfstr(char *str)
{
	if (str == 0)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
