/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:25:52 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 12:57:17 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(int n, t_printf_lst *lst)
{
	n = 3;
	ft_putstr_fd("HE", 1);
	ft_putchar_fd(lst->specifier, 1);
	return (n);
}
