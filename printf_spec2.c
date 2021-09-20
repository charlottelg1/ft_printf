/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_spec2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:25:18 by cle-gran          #+#    #+#             */
/*   Updated: 2021/09/19 17:48:17 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xmin(va_list ap, int *count)
{
	unsigned long int	xmin;

	xmin = va_arg(ap, unsigned int);
	ft_putnbr_base(xmin, "0123456789abcdef", count);
}

void	ft_xmaj(va_list ap, int *count)
{
	unsigned long	xmaj;

	xmaj = va_arg(ap, unsigned int);
	ft_putnbr_base(xmaj, "0123456789ABCDEF", count);
}
