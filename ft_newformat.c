/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newformat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:58:59 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/29 15:01:50 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	ft_newformat(void)
{
	t_format	newformat;

	newformat.dot = 0;
	newformat.hash = 0;
	newformat.minus = 0;
	newformat.neg_prec = 0;
	newformat.plus = 0;
	newformat.precison = 0;
	newformat.space = 0;
	newformat.specifier = 0;
	newformat.width = 0;
	newformat.zero = 0;
	return (newformat);
}
