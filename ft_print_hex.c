/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:25:52 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/30 21:02:13 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, t_printf_lst *lst)
{
	char	*hex_nbr;

	hex_nbr = ft_itoa_hex((long unsigned int)n);
	return (ft_print_hex_format(hex_nbr, lst));
}
