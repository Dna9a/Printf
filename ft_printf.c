/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younux <younux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:50:24 by yoabied           #+#    #+#             */
/*   Updated: 2026/01/10 14:27:09 by younux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type_routeur(char const type, va_list a)
{
	if (type == 'c')
		return (ft_putchar(va_arg(a, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(a, char *)));
	else if (type ==
		return (ft_putnbr(va_arg(a, int)));
	else if (type ==
		return (ft_putnbr(va_arg(a, int)));
	else if (type ==
		return (ft_putnbr(va_arg(a, int)));
	else if (type ==
		return (ft_putnbr(va_arg(a, int)));
	else if (type ==
		return (ft_putnbr(va_arg(a, int)));
	else
		return (ft_putchar(type));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printed;
	int i;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			type_routeur(str[i], args);
		}
		else
			printed += ft_putchar(str[i]);
			i++;
	}
	va_end(args);
	return (printed);
}