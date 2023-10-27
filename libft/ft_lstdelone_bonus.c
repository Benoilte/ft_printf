/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:44:59 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 10:23:30 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Use del function to delete element's content and free lst memory
*/
void	ft_lstdelone(t_list *lst, void (*del)(t_list *))
{
	if (!lst)
		return ;
	del(lst);
	free(lst);
}
