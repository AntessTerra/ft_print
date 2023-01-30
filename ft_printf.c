/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:40:23 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/29 16:15:49 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(t_format format, va_list args)
{
	int	printed;

	printed = 0;
	if (format.specifier == 'c' || format.specifier == '%')
		printed = ft_print_char(format, args);
	if (format.specifier == 's')
		printed = ft_print_str(format, args);
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	int		printed;
	va_list	args;
	char	*save;

	printed = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			save = (char *)str;
			if (*(++str))
				printed += ft_format((char *)str, args);
			while (*str && !ft_strchr(SPECIFIERS, *str))
				str++;
			if (!(*str))
				str = save;
		}
		else
			printed += ft_printchar(*str);
		if (*str)
			str++;
	}
	va_end(args);
	return (printed);
}
