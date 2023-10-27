/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:21:58 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 11:41:39 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int n, t_list *lst)
{
	(void)lst;
	ft_putnbr_fd(n, 1);
	return (1);
}
