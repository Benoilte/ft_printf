/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:36:39 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/31 13:33:02 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_width_fd(int width, int fd, int flag_zero)
{
	while (width)
	{
		if (flag_zero)
			ft_putchar_fd('0', fd);
		else
			ft_putchar_fd(' ', fd);
		width--;
	}
}
