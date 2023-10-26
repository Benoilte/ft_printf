/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:28:31 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/26 22:39:48 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_flags_specifier(const char *format, int *i, t_list **lst);
static char	*ft_get_digit(const char *s, int *i);
void		del(void *content);

int	ft_parse_format(const char *format, va_list args)
{
	int		len;
	int		i;
	t_list	*lst;

	len = 0;
	i = 0;
	lst = NULL;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			//printf("\nformat[%d]: %c\n", i, format[i]);
			ft_get_flags_specifier(format + i, &i, &lst);
			if (!ft_is_specifier(format[i]))
				return (-1);
			len += ft_print_arg(format[i], args, lst);
			ft_lstclear(&lst, &del);
			//printf("\nformat[%d]: %c\n", i, format[i]);
			i++;
			//printf("\nformat[%d]: %c\n", i, format[i]);

		}
		else
		{
			ft_putchar_fd(format[i], 1);
			len++;
			i++;
		}
	}
	return (len);
}

static void	ft_get_flags_specifier(const char *format, int *i, t_list **lst)
{
	while (ft_is_flag(format[*i]) && format[*i])
	{
		ft_lstadd_back(lst, ft_lstnew(ft_substr(format + *i, 0, 1)));
		*i += 1;
	}
	if (ft_isdigit(format[*i]))
		ft_lstadd_back(lst, ft_lstnew(ft_get_digit(format + *i, i)));
	if (format[*i] == '.')
	{
		ft_lstadd_back(lst, ft_lstnew(ft_substr(format + *i, 0, 1)));
		*i += 1;
		if (ft_isdigit(format[*i]))
			ft_lstadd_back(lst, ft_lstnew(ft_get_digit(format + *i, i)));
	}
	if (ft_is_specifier(format[*i]))
		ft_lstadd_back(lst, ft_lstnew(ft_substr(format + *i, 0, 1)));
}

static char	*ft_get_digit(const char *s, int *i)
{
	int		end;
	char	*str_digit;

	end = *i;
	end++;
	while (ft_isdigit(s[end]) && s[end])
		end++;
	str_digit = ft_substr(s + *i, 0, *i - end);
	*i = end;
	*i += 1;
	return(str_digit);
}

void	del(void *content)
{
	free(content);
}
