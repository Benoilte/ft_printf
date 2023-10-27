/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:47:48 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 12:04:29 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int	count;

	count = ft_printf("Hello%++00--  ##.42c--%dWorld!\n", 33, 24);
	printf("count: %d\n", count);
	printf("[%10.2s]\n", "hello");
	printf("[%+++++++000000004d]\n", 42);
	printf("[%+04i]\n", 42);
	return (0);
}
