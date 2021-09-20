/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-gran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:56:06 by cle-gran          #+#    #+#             */
/*   Updated: 2021/09/19 17:44:39 by cle-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_spec(const char *format, int *count, va_list p);
void	ft_c(va_list ap, int *count);
void	ft_s(va_list ap, int *count);
void	ft_p(va_list ap, int *count);
void	ft_di(va_list ap, int *count);
void	ft_u(va_list ap, int *count);
void	ft_xmin(va_list ap, int *count);
void	ft_xmaj(va_list ap, int *count);
void	ft_htmin(va_list ap, int *count);
void	ft_htmaj(va_list ap, int *count);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr_base(unsigned int nb, char *base, int *count);
void	ft_putnbr_unsigned(unsigned int nb, int *count);
void	ft_putp(unsigned long nb, char *base, int *count);

#endif
