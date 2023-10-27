/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:24:40 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/27 10:59:39 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_parse_format(const char *format, va_list args);
int	ft_is_specifier(char c);
int	ft_is_flag(char c);
int	ft_print_arg(va_list args, t_list *lst);
int	ft_print_char(char c, t_list *lst);
int	ft_print_str(char *s, t_list *lst);
int	ft_print_ptr(void *p, t_list *lst);
int	ft_print_decimal(int n, t_list *lst);
int	ft_print_int(int n, t_list *lst);
int	ft_print_hex(int n, t_list *lst);
int	ft_print_uint(unsigned int u, t_list *lst);
int	ft_print_percent(t_list *lst);

#endif
