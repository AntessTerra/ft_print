/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbartosi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:51:21 by jbartosi          #+#    #+#             */
/*   Updated: 2023/01/29 13:54:56 by jbartosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	ft_printf("Char-------\n");
	printf("\nReturn: %i\n", ft_printf("%c", 'a'));
	printf("\nReturn: %i\n", printf("%c", 'a'));
	ft_printf("String-------\n");
	printf("\nReturn: %i\n", ft_printf("%s", "ahoj"));
	printf("\nReturn: %i\n", printf("%s", "ahoj"));
	ft_printf("Memory-------\n");
	printf("\nReturn: %i\n", ft_printf("%------21pwhoa wtf is that", (void *) 13));
	printf("\nReturn: %i\n", printf("%------21pwhoa wtf is that", (void *) 13));
	printf("\nReturn: %i\n", ft_printf("the address is %12p", (void *)0x7ffe6b8e60c7));
	printf("\nReturn: %i\n", printf("the address is %12p", (void *)0x7ffe6b8e60c7));
	printf("Number-------\n");
	printf("\nReturn: %i\n", ft_printf("%.13d", (int)-2147483648));
	printf("\nReturn: %i\n", printf("%.13d", (int)-2147483648));
	printf("\nReturn: %i\n", ft_printf("%   i", 2147837));
	printf("\nReturn: %i\n", printf("%   i", 2147837));
	ft_printf("Small hex-------\n");
	printf("\nReturn: %i\n", ft_printf("%x", 0));
	printf("\nReturn: %i\n", printf("%x", 0));
	ft_printf("Lagre hex-------\n");
	printf("\nReturn: %i\n", ft_printf("%X", 254135));
	printf("\nReturn: %i\n", printf("%X", 254135));
	return (0);
}
