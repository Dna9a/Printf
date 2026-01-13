/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younux <younux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 00:42:19 by younux            #+#    #+#             */
/*   Updated: 2026/01/13 12:37:57 by younux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_xs(unsigned long nbr)
{
	const char	*base = "0123456789abcdef";
	int			count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_hex_xs(nbr / 16);
		count += ft_putnbr_hex_xs(nbr % 16);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}

int	ft_putnbr_hex_xl(unsigned long nbr)
{
	const char	*base = "0123456789ABCDEF";
	int			count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_putnbr_hex_xl(nbr / 16);
		count += ft_putnbr_hex_xl(nbr % 16);
	}
	else
		count += ft_putchar(base[nbr]);
	return (count);
}

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
	}
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbr_unsigned(nb / 10);
		count += ft_putchar((nb % 10) + '0');
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}

int	ft_putaddress(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
	{
		count += ft_putstr("0x0");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_putnbr_hex_xs((unsigned long)ptr);
	return (count);
}
