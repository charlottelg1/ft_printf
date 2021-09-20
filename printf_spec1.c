/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specs1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:07:04 by cle-gran          #+#    #+#             */
/*   Updated: 2021/09/19 17:46:39 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_c(va_list ap, int *count)
{
	int	c;

	c = va_arg(ap, int);
	ft_putchar(c, count);
}

void	ft_s(va_list ap, int *count)
{
	char	*s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		ft_putchar(*s, count);
		s++;
	}
}

void	ft_p(va_list ap, int *count)
{
	unsigned long	p;

	p = va_arg(ap, unsigned long );
	ft_putchar('0', count);
	ft_putchar('x', count);
	ft_putp(p, "0123456789abcdef", count);
}

void	ft_di(va_list ap, int *count)
{
	int	d;

	d = va_arg(ap, int);
	ft_putnbr(d, count);
}

void	ft_u(va_list ap, int *count)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_putnbr_unsigned(u, count);
}
