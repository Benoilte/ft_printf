/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:23:09 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/30 10:09:23 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int n, t_printf_lst *lst)
{
	(void)lst;
	n = (long int)n;
	ft_putnbr_uint_fd(n, 1);
	return (1);
}
