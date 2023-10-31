/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:51:24 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/31 14:02:27 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf_lst	*set_new_lst(t_printf_lst *lst)
{
	lst = (t_printf_lst *)malloc(sizeof(t_printf_lst));
	if (!lst)
		return ((void *)0);
	lst->flag_zero = 0;
	lst->flag_plus = 0;
	lst->flag_minus = 0;
	lst->flag_space = 0;
	lst->flag_hash = 0;
	lst->width = 0;
	lst->precision = -1;
	lst->specifier = 0;
	lst->next = (void *)0;
	return (lst);
}

int	ft_set_lst_flag(const char *str, t_printf_lst *lst)
{
	int		j;

	j = 0;
	while (ft_is_flag(str[j]) && str[j] != '\0')
	{	
		if (str[j] == '0')
			lst->flag_zero = 1;
		if (str[j] == '+')
			lst->flag_plus = 1;
		if (str[j] == '-')
			lst->flag_minus = 1;
		if (str[j] == ' ')
			lst->flag_space = 1;
		if (str[j++] == '#')
			lst->flag_hash = 1;
	}
	return (j);
}
