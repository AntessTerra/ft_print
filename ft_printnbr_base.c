/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:41:16 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/27 12:59:28 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_base(long long int nb, const char *base)
{
	int	printed;
	int	base_len;

	printed = 0;
	base_len = ft_strlen(base);
	if (nb == LLONG_MIN)
	{
		write(1, "-9223372036854775807", 20);
		return (20);
	}
	else if (nb < 0)
	{
		ft_printchar('-');
		printed += ft_printnbr_base(-nb, base);
	}
	else if (nb >= base_len)
	{
		ft_printnbr_base(nb / base_len, base);
		ft_printnbr_base(nb % base_len, base);
	}
	else
		ft_printchar(base[nb]);
	printed += ft_getwritenlen(nb, base_len);
	return (printed);
}
