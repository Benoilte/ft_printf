/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:21:25 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/31 13:43:51 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_set_ptr_lst(t_printf_lst *lst);

int	ft_print_ptr(void *p, t_printf_lst *lst)
{
	uintptr_t	ptr;
	char		*hex_nbr;

	ptr = (uintptr_t)p;
	if (!p)
		hex_nbr = ft_strdup("0");
	else
		hex_nbr = ft_itoa_hex(ptr);
	ft_set_ptr_lst(lst);
	return (ft_print_hex_format(hex_nbr, lst));
}

static void	ft_set_ptr_lst(t_printf_lst *lst)
{
	lst->flag_zero = 0;
	lst->precision = -1;
}
