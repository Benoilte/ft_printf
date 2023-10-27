/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:43:44 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 12:03:18 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
check if 'c' char is a printf 'flag'.
flags handled are '-' '0' '#' ' ' '+'
if 'c' is one of a flag return 1 - otherwise return 0
*/
int	ft_is_flag(char c)
{
	int		i;
	char	*set;

	i = 0;
	set = "-0# +";
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
