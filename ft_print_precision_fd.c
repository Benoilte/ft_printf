/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_precision_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:17:33 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/31 13:32:27 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_precision_fd(int len, int fd)
{
	while (len)
	{
		ft_putchar_fd('0', fd);
		len--;
	}
}

int	ft_print_zero_precision_fd(t_printf_lst *lst, int fd)
{
	if (lst->flag_minus)
	{
		if (lst->flag_plus)
			ft_putchar_fd('+', fd);
		if (lst->width)
			ft_print_width_fd(lst->width - lst->flag_plus, 1, lst->flag_zero);
	}
	else
	{
		if (lst->width)
			ft_print_width_fd(lst->width - lst->flag_plus, 1, lst->flag_zero);
		if (lst->flag_plus)
			ft_putchar_fd('+', fd);
	}
	if (lst->width == 0 && lst->flag_space)
		ft_putchar_fd(' ', 1);
	if (lst->width == 0 && (lst->flag_plus || lst->flag_space))
		return (1);
	return (lst->width);
}
