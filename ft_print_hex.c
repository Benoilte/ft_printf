/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:25:52 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/26 22:12:32 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(char c, int n, t_list *lst)
{
	(void)lst;
	n = 3;
	ft_putstr_fd("HE", 1);
	ft_putchar_fd(c, 1);
	return (n);
}
