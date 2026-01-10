/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younux <younux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:50:10 by yoabied           #+#    #+#             */
/*   Updated: 2026/01/10 13:09:50 by younux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // varg
# include <unistd.h> // write putchar putstr
	
int	ft_printf(const char *format, ...);
int ft_printf(const char *, ...);
int	type_routeur(char const type, va_list a);

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif