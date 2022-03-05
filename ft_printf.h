/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:48:31 by jonghapa          #+#    #+#             */
/*   Updated: 2022/03/04 17:33:17 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./Libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	check_type(const char c, va_list ap);

int	ft_printfchar(const char c);
int	ft_printfstr(char *str);
int	ft_printfptr(unsigned long long ptr);
int	ft_printfhex(unsigned int hex, const char type);
int	ft_printfstr(char *str);
int	ft_printfnbr(int nbr);
int	ft_printfunbr(unsigned int nbr);
int	getlength(char *base);
int	basecheck(char *base);
void	calculate(int nbr, char *base, int baselen);
void	ft_putnbr_base(int nbr, char *base);
#endif
