/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:49:24 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/29 13:55:08 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long long nb, const char specifier)
{
	int					printed;
	unsigned int		base_len;
	char				*base;

	printed = 0;
	if (specifier == 'p' && nb > 0)
		printed += ft_printstr("0x");
	else if (specifier == 'p' && nb == 0)
		return (ft_printstr("(nil)"));
	if (specifier == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	base_len = ft_strlen(base);
	if (nb >= base_len)
	{
		ft_printnbr_base(nb / base_len, base);
		ft_printnbr_base(nb % base_len, base);
	}
	else
		ft_printchar(base[nb]);
	printed += ft_getwritenlen(nb, base_len);
	return (printed);
}
