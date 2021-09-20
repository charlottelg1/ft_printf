/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:31:28 by cle-gran          #+#    #+#             */
/*   Updated: 2021/09/19 17:43:47 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_spec(const char *format, int *count, va_list ap)
{
	format++;
	if (*format == 'c')
		ft_c(ap, count);
	else if (*format == 's')
		ft_s(ap, count);
	else if (*format == 'p')
		ft_p(ap, count);
	else if ((*format == 'd') || (*format == 'i'))
		ft_di(ap, count);
	else if (*format == 'u')
		ft_u(ap, count);
	else if (*format == 'x')
		ft_xmin(ap, count);
	else if (*format == 'X')
		ft_xmaj(ap, count);
	else if (*format == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			ft_spec(format, &count, ap);
			format++;
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}
