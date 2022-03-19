/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapark <jonghapark@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:18:28 by jonghapa          #+#    #+#             */
/*   Updated: 2022/03/20 00:08:14 by jonghapark       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void calculate(long long nbr, char *base, int baselen)
{
	if (nbr == 0)
		return;
	calculate(nbr / baselen, base, baselen);
	write(1, &base[nbr % baselen], 1);
}

void ft_putnbr_base(long long nbr, char *base)
{
	int baselen;
	long long tmp;

	tmp = nbr;
	baselen = ft_strlen(base);
	if (tmp >= 0)
	{
		calculate(tmp / baselen, base, baselen);
		write(1, &base[tmp % baselen], 1);
	}
	else
	{
		write(1, "-", 1);
		calculate(-tmp / baselen, base, baselen);
		write(1, &base[-tmp % baselen], 1);
	}
}

int ft_base_strlen(int baselen, unsigned long long num, int t)
{
	int ans;

	ans = 0;
	if (num == 0)
		return (1);
	if (t != 0)
	{
		num = (long long)num;
		if (num < 0)
			ans++;
	}
	while (num)
	{
		num /= baselen;
		ans++;
	}
	return (ans);
}