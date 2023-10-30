/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:25:52 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/30 20:39:11 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static void	ft_print_hex_nbr(char *hex_nbr, int len, t_printf_lst *lst);
// static void ft_print_hash_flag(t_printf_lst *lst);

int	ft_print_hex(unsigned int n, t_printf_lst *lst)
{
	char	*hex_nbr;

	hex_nbr = ft_itoa_hex((long unsigned int)n);
	return (ft_print_hex_format(hex_nbr, lst));
	// str_len = ft_strlen(hex_nbr);
	// if (lst->precision > str_len)
	// 	str_len = lst->precision;
	// if (lst->flag_hash)
	// 	str_len += 2;
	// if (lst->flag_minus && lst->width > str_len)
	// {
	// 	ft_print_hex_nbr(hex_nbr, str_len, lst);
	// 	ft_print_width_fd(lst->width - str_len, 1, lst->flag_zero);
	// }
	// else if (lst->width > str_len && !lst->flag_zero)
	// {
	// 	ft_print_width_fd(lst->width - str_len, 1, lst->flag_zero);
	// 	ft_print_hex_nbr(hex_nbr, str_len, lst);
	// }
	// else
	// 	ft_print_hex_nbr(hex_nbr, str_len, lst);
	// free(hex_nbr);
	// if (lst->width > str_len)
	// 	return (lst->width);
	// return (str_len);
}

// static void	ft_print_hex_nbr(char *hex_nbr, int len, t_printf_lst *lst)
// {
// 	int		i;

// 	i = 0;

// 	ft_print_hash_flag(lst);
// 	if (lst->precision > (int)ft_strlen(hex_nbr))
// 		ft_print_precision_fd(lst->precision - ft_strlen(hex_nbr), 1);
// 	if (lst->width > len && lst->flag_zero)
// 		ft_print_width_fd(lst->width - len, 1, lst->flag_zero);
// 	while (hex_nbr[i])
// 	{
// 		if (lst->specifier == 'X')
// 			ft_putchar_fd(ft_toupper(hex_nbr[i]), 1);
// 		else
// 			ft_putchar_fd(hex_nbr[i], 1);
// 		i++;
// 	}
// }

// static void ft_print_hash_flag(t_printf_lst *lst)
// {
// 	if (lst->flag_hash)
// 	{
// 		ft_putchar_fd('0', 1);
// 		ft_putchar_fd(lst->specifier, 1);
// 	}
// }
