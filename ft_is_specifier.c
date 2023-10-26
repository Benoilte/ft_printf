/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:00:32 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/26 11:06:48 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
check if 'c' char is a 'specifier' of printf.
specifier handled are 'c' 's' 'p' 'd' 'i' 'u' 'x' 'X' '%'
if 'c' is one of a specifier return 1 - otherwise return 0
*/
int	ft_is_specifier(char c)
{
	int		i;
	char	*set;

	i = 0;
	set = "cspdiuxX%";
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
