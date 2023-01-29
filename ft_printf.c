/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:40:23 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/29 14:19:55 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char specifier)
{
	if (specifier == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_printhex(va_arg(args, long long unsigned), specifier));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printnbr_base(va_arg(args, int), "0123456789"));
	else if (specifier == 'u')
		return (ft_printnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_printhex(va_arg(args, unsigned int), specifier));
	else if (specifier == '%')
		return (ft_printchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printed;
	va_list	args;

	i = 0;
	printed = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed += ft_format(args, str[i + 1]);
			i++;
		}
		else
			printed += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
