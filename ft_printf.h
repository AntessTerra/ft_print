/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:40:14 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/29 14:20:16 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_printnbr_base(long long int nb, const char *base);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printhex(unsigned long long nb, const char specifier);
int	ft_getwritenlen(long long nb, int base_len);

#endif
