/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:11:47 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/30 11:35:02 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Convert unsigned integer 'uint' in its hexadecimal value
and return in its representative string NUL-terminated
ft_itoa_uint(42) => "2a" | ft_itoa_uint(-10) = "fffffff6"
*/
char	*ft_itoa_hex(unsigned int uint)
{
	char			*str_num;
	char			*str_hex;
	unsigned int	uint_cpy;
	int				str_len;

	str_len = 0;
	uint_cpy = uint;
	str_hex = "0123456789abcdef";
	if (uint == 0)
		str_len = 1;
	while (uint_cpy)
	{
		uint_cpy /= 16;
		str_len++;
	}
	str_num = ft_calloc((str_len + 1), sizeof(char));
	if (!str_num)
		return ((void *)0);
	str_num[str_len] = '\0';
	while (uint)
	{
		str_num[--str_len] = str_hex[uint % 16];
		uint /= 16;
	}
	return (str_num);
}