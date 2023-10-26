/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:21:58 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/26 22:41:55 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int n, t_list *lst)
{
	(void)lst;
	//printf("decimal: %d\n", n);
	ft_putnbr_fd(n, 1);
	return (1);
}
