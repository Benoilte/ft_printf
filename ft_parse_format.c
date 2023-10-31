/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:28:31 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/31 14:07:22 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_flags_specifier(const char *str, int *i, t_printf_lst *lst);
static int	ft_get_digit(const char *s, int *i);
static void	ft_print_format(const char *str, int *i, int *len);

int	ft_parse_format(const char *format, va_list args)
{
	int				len;
	int				i;
	t_printf_lst	*lst;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			lst = set_new_lst(lst);
			i++;
			ft_get_flags_specifier(format + i, &i, lst);
			if (!ft_is_specifier(lst->specifier))
				return (-1);
			len += ft_print_arg(args, lst);
			free(lst);
			i++;
		}
		else
			ft_print_format(format + i, &i, &len);
	}
	return (len);
}

static void	ft_print_format(const char *str, int *i, int *len)
{
	ft_putchar_fd(*str, 1);
	*i += 1;
	*len += 1;
}

static void	ft_get_flags_specifier(const char *str, int *i, t_printf_lst *lst)
{
	int		j;

	j = ft_set_lst_flag(str, lst);
	if (ft_isdigit(str[j]))
		lst->width = ft_get_digit(str + j, &j);
	if (str[j] == '.')
	{
		lst->precision = 0;
		if (ft_isdigit(str[++j]))
			lst->precision = ft_get_digit(str + j, &j);
	}
	if (ft_is_specifier(str[j]))
		lst->specifier = str[j];
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
	return (num);
}
