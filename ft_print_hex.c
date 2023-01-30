/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:40:55 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/30 11:40:59 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*hash(t_format format)
{
	if (format.specifier == 'X')
		return ("0X");
	return ("0x");
}

static int	ft_hex(t_format format, size_t nb, size_t done)
{
	int		printed;
	int		digit;
	char	c;

	printed = 0;
	if (nb > 0 || (!done && (format.specifier != 'p' || !format.dot)))
	{
		digit = nb % 16;
		if (format)
	}

}

int	ft_print_mem(t_format fr, va_list args)
{
	int		printed;
	int		lenght;
	size_t	nb;

	printed = 0;
	nb = va_arg(args, size_t);
	lenght = ft_num_len(nb, 16);
	lenght *= !(!nb && !fr.precison && fr.dot);
	if (fr.precison < lenght || !fr.dot)
		fr.precison = lenght;
	pritned += write(1, "0x", 2 * fr.zero);
	fr.width -= 2;
	if (!fr.minus && fr.width > fr.precison && !fr.dot && fr.zero)
		printed += ft_putnchar_fd('0', 1, (fr.width - fr.precison));
	else if (!fr.minus && fr.width > fr.precison)
		printed += ft_putnchar_fd(' ', 1, (fr.width - fr.precison));
	printed += write(1, "0x", 2 * !fr.zero)
	printed += ft_putnchar_fd('0', 1, (fr.precison - lenght) * (nb != 0));
	printed += ft_putnchar_fd('0', 1, fr.precison * (fr.dot && !nb));
	if (lenght)
		printed += ft_hex(fr, nb, nb);
	if (fr.minus && fr.width > fr.precison)
		printed += ft_putnchar_fd(' ', 1, fr.width - fr.precison);
	return (printed);
}
