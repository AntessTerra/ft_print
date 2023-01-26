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

int	ft_printf(int n, ...)
{
	int		sum;
	va_list	ptr;

	sum = 0;
	va_start(ptr, n);
	while (n > 0)
	{
		sum += va_arg(ptr, int);
		n--;
	}
	va_end(ptr);
	return (sum);
}
