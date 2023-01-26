/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:49:24 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/26 21:49:43 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(long long int nb, const char *base)
{
	static int	printed;
	int			base_len;

	base_len = ft_strlen(base);
	if (nb == -9223372036854775807)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	else if (nb < 0)
	{
		printed += ft_printchar('-');
		ft_printnbr_base(-nb, base);
	}
	else if (nb > base_len)
	{
		ft_printnbr_base(nb / base_len, base);
		ft_printnbr_base(nb % base_len, base);
	}
	else
		printed += ft_printchar(base[nb]);
	return (printed);
}
