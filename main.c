/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:47:48 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/26 22:49:00 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int	count;

	count = ft_printf("Hello%c %dWorld!\n", 33, 24);
	printf("count: %d\n", count);
	printf("[%10.2s]\n", "hello");
	printf("[%+04d]\n", 42);
	printf("[%+04i]\n", 42);
	return (0);
}
