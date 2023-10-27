/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:22:19 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 12:56:54 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(va_list args, t_printf_lst *lst)
{
	if (lst->specifier == 'c')
		return (ft_print_char(va_arg(args, unsigned int), lst));
	if (lst->specifier == 's')
		return (ft_print_str(va_arg(args, char *), lst));
	if (lst->specifier == 'p')
		return (ft_print_ptr(va_arg(args, void *), lst));
	if (lst->specifier == 'd')
		return (ft_print_decimal(va_arg(args, int), lst));
	if (lst->specifier == 'i')
		return (ft_print_int(va_arg(args, int), lst));
	if (lst->specifier == 'u')
		return (ft_print_uint(va_arg(args, unsigned int), lst));
	if (lst->specifier == 'x' || lst->specifier == 'X')
		return (ft_print_hex(va_arg(args, int), lst));
	if (lst->specifier == '%')
		return (ft_print_percent(lst));
	return (0);
}
