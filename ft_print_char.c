/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:19:21 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 12:06:01 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c, t_list *lst)
{
	/*
	printf("\n{lst->flag_zero: %d \n lst->flag_plus: %d \n lst->flag_minus: %d \n lst->flag_space: %d \n lst->flag_hash: %d \n lst->widh: %d \n lst->precision: %d \n lst->specifier: %c \n}\n", lst->flag_zero, lst->flag_plus, lst->flag_minus, lst->flag_space, lst->flag_hash, lst->width, lst->precision, lst->specifier);
	*/
	(void)lst;
	ft_putchar_fd(c, 1);
	return (1);
}
