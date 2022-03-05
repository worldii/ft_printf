/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfmix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 16:38:23 by jonghapa          #+#    #+#             */
/*   Updated: 2022/03/05 17:29:13 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int strlength(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	ft_base_strlen(int baselen, long long num)
{
	int	ans;

	if (num == 0)
		return (1);
	ans = 0;
	if (num < 0)
		ans++;
	while (num)
	{
		num /= baselen;
		ans++;
	}
	return (ans);
}


int	ft_printfhex(int nbr, const char type)
{
	int		len;
	char	*str;

	if (type == 'u' || type == 'd' || type == 'i')
	{
		ft_putnbr_base(nbr,"0123456789");
		len = ft_base_strlen(10, nbr);
		return (len);
	}
	else if (type == 'X') 
		ft_putnbr_base(nbr, "0123456789ABCDEF");
	else 
		ft_putnbr_base(nbr, "0123456789abcdef");
	len = ft_base_strlen(16, nbr);
	return (len);
}



int	ft_printfnbr(int nbr)
{
	int	len;
	char	*str;

	str = ft_itoa(nbr);
	len = strlength(str);
	ft_putnbr_base(nbr, "0123456789");
	free(str);
	return (len);
}

int	ft_printfptr(unsigned long long ptr)
{
}

int ft_printfstr(char *str)
{
	int	i;
	
	i = -1;
	while (str[++i])
		ft_putchar_fd(str[i],1);
	return (i);
}
