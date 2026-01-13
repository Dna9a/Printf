/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younux <younux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:50:10 by yoabied           #+#    #+#             */
/*   Updated: 2026/01/13 15:36:01 by younux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *type, ...);
int	type_routeur(char const type, va_list a);

int	ft_putchar(char c);
int	ft_putstr(char *s);

int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_hex(unsigned int nbr, char type);
int	ft_putaddress(void *ptr);

#endif
