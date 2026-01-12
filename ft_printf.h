/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younux <younux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:50:10 by yoabied           #+#    #+#             */
/*   Updated: 2026/01/12 22:53:55 by younux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // varg
# include <unistd.h> // write putchar putstr

int	ft_printf(const char *format, ...);
int	type_routeur(char const type, va_list a);

int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_hex_xl(unsigned long nbr);
int	ft_putnbr_hex_xs(unsigned long nbr);
int	ft_putaddress(void *ptr);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif
