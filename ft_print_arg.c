/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:22:19 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/26 22:32:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(const char specifier, va_list args, t_list *lst)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, unsigned int), lst));
	if (specifier == 's')
		return (ft_print_str(va_arg(args, char *), lst));
	if (specifier == 'p')
		return (ft_print_ptr(va_arg(args, void *), lst));
	if (specifier == 'd')
		return (ft_print_decimal(va_arg(args, int), lst));
	if (specifier == 'i')
		return (ft_print_int(va_arg(args, int), lst));
	if (specifier == 'u')
		return (ft_print_uint(va_arg(args, unsigned int), lst));
	if (specifier == 'x' || specifier == 'X')
		return (ft_print_hex(specifier, va_arg(args, int), lst));
	if (specifier == '%')
		return (ft_print_percent(specifier, lst));
	return (0);
}
