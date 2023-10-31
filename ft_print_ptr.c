/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:21:25 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/31 10:09:45 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_set_ptr_lst(t_printf_lst *lst);

int	ft_print_ptr(void *p, t_printf_lst *lst)
{
	uintptr_t	ptr;
	char		*hex_nbr;

	if (!p)
	{
		ft_putstr_fd("0x0", 1);
		return (3);
	}
	ft_set_ptr_lst(lst);
	ptr = (uintptr_t)p;
	hex_nbr = ft_itoa_hex(ptr);
	return (ft_print_hex_format(hex_nbr, lst));
}

static void ft_set_ptr_lst(t_printf_lst *lst)
{
	lst->flag_hash = 1;
	lst->flag_zero = 0;
	lst->precision = -1;
	lst->specifier = 'x';
}
