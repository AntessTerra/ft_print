/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:40:23 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/17 12:40:26 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char specifier)
{
	int	printed;

	printed = 0;
	if (specifier == 'c')
		printed += ft_printchar(va_arg(args, int));
	return (printed);
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
