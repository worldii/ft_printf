/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapark <jonghapark@student.42seoul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:48:31 by jonghapa          #+#    #+#             */
/*   Updated: 2022/03/20 01:00:00 by jonghapark       ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./Libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// printf
int		ft_printf(const char *format, ...);
int		check_type(const char c, va_list *ap);
int		ft_printfchar(int c);

// printmix
int		ft_printfhex(unsigned int nbr, const char type);
int		ft_printfnbr(int nbr);
int		ft_printfstr(char *str);
int		ft_printfptr(unsigned long long ptr);
void	ft_putptr(unsigned long long ptr);

// util
void	calculate(long long nbr, char *base, int baselen);
void	ft_putnbr_base(long long nbr, char *base);
int		ft_base_strlen(int baselen, unsigned long long num, int t);

#endif
