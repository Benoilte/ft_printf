/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:28:31 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 12:03:27 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_flags_specifier(const char *format, int *i, t_list *lst);
static int	ft_get_digit(const char *s, int *i);
void		set(t_list *lst);
void		del(t_list *lst);

int	ft_parse_format(const char *format, va_list args)
{
	int		len;
	int		i;
	t_list	*lst;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			//printf("\nformat[%d]: %c\n", i, format[i]);
			//printf("\nlst->specifier: %c\n", lst->specifier);
			lst = (t_list *)malloc(sizeof(t_list));
			set(lst);
			i++;
			ft_get_flags_specifier(format + i, &i, lst);
			if (!ft_is_specifier(lst->specifier))
				return (-1);
			len += ft_print_arg(args, lst);
			ft_lstclear(&lst, &del);
			i++;
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

static void	ft_get_flags_specifier(const char *format, int *i, t_list *lst)
{
	int		j;

	j = 0;
	while (ft_is_flag(format[j]) && format[j] != '\0')
	{	
		if (format[j] == '0')
			lst->flag_zero = 1;
		if (format[j] == '+')
			lst->flag_plus = 1;
		if (format[j] == '-')
			lst->flag_minus = 1;
		if (format[j] == ' ')
			lst->flag_space = 1;
		if (format[j] == '#')
			lst->flag_hash = 1;
		j += 1;
	}
	if (ft_isdigit(format[j]))
		lst->width = ft_get_digit(format + j, &j);
	if (format[j] == '.')
	{
		j += 1;
		if (ft_isdigit(format[j]))
			lst->precision = ft_get_digit(format + j, &j);
	}
	if (ft_is_specifier(format[j]))
		lst->specifier = format[j];
	*i += j;
}

static int	ft_get_digit(const char *s, int *j)
{
	int		end;
	int		num;
	char	*str_digit;

	end = 0;
	end = 1;
	while (ft_isdigit(s[end]) && s[end])
		end++;
	str_digit = ft_substr(s, 0, end);
	num = ft_atoi(str_digit);
	free(str_digit);
	*j += end;
	return(num);
}

void	set(t_list *lst)
{
	lst->flag_zero = 0;
	lst->flag_plus = 0;
	lst->flag_minus = 0;
	lst->flag_space = 0;
	lst->flag_hash = 0;
	lst->width = 0;
	lst->precision = 0;
	lst->specifier = 0;
	lst->next = NULL;
}

void	del(t_list *lst)
{
	lst->flag_zero = 0;
	lst->flag_plus = 0;
	lst->flag_minus = 0;
	lst->flag_space = 0;
	lst->flag_hash = 0;
	lst->width = 0;
	lst->precision = 0;
	lst->specifier = 0;
	lst->next = NULL;
}
