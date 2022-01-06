/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:37:01 by jonghapa          #+#    #+#             */
/*   Updated: 2022/01/06 17:59:39 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

		}
		else
		{

		}
	}

	va_end(ap);
	return (len);
}
