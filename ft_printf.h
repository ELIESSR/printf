/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:43:59 by elteran           #+#    #+#             */
/*   Updated: 2024/02/18 16:43:10 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <libc.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	format_specifier(va_list args, char str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	hexa_re(unsigned long n, char *hex);

#endif
