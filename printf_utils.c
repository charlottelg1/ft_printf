/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:57:51 by cle-gran          #+#    #+#             */
/*   Updated: 2021/09/19 17:51:36 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', count);
		ft_putchar('2', count);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= (-1);
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10, count);
	ft_putchar((nb % 10) + '0', count);
}

void	ft_putnbr_unsigned(unsigned int nb, int *count)
{
	if (nb / 10 != 0)
		ft_putnbr(nb / 10, count);
	ft_putchar((nb % 10) + '0', count);
}

void	ft_putnbr_base(unsigned int nb, char *base, int *count)
{
	if (nb == 2147483647)
	{
		ft_putchar('7', count);
		nb = 268435455;
	}
	if (nb / 16 != 0)
		ft_putnbr_base(nb / 16, base, count);
	ft_putchar(base[nb % 16], count);
}

void	ft_putp(unsigned long nb, char *base, int *count)
{
	if (nb / 16 != 0)
		ft_putp(nb / 16, base, count);
	ft_putchar(base[nb % 16], count);
}
