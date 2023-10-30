/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:47:48 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/30 11:00:19 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_print_char(void);
void	test_print_percent(void);
void	test_print_string(void);

int		main(void)
{
	// test_print_char();
	// test_print_percent();
	// test_print_string();
	ft_putnbr_hex_fd(-1, 1);
	ft_putchar_fd('\n', 1);
	printf("%x\n", -1);
	/*
	int	count;
	count = ft_printf("Hello%++00--  ##.c--%dWorld!\n", 33, 24);
	printf("count: %d\n", count);
	printf("[%10.2s]\n", "hello");
	printf("[%+++++++0000+++00004d]\n", 42);
	printf("[%-4i]\n", 42);
	printf("[%10.s]\n", "coucou");
	printf("[%#x]\n", -10);
	printf("[%25p]\n", &count);
	printf("[%010u]\n", 42);
	printf("[%10c]\n", 'a');
	printf("[%010%]\n");
	*/
	return (0);
}

void	test_length(int	printf_len, int ft_printf_len)
{
	if (printf_len - ft_printf_len)
		ft_printf("\033[31mlength are different, printf_len: %d and ft_printf_len: %d\033[0m\n", printf_len, ft_printf_len);
	else
		ft_printf("\033[32mlength are the same\033[0m\n");
}

void	test_print_char(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\033[36m ----------- Test print char  ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a char:\033[0m\n");
	ft_printf("ft_printf: [%c]\n", 'a');
	printf("   printf: [%c]\n", 'a');
	
	ft_printf("\n\033[33mTest print char with flag '-' width of 10:\033[0m\n");
	ft_printf("ft_printf: [%-10c]\n", 'a');
	printf("   printf: [%-10c]\n", 'a');
	
	ft_printf("\n\033[33mTest print char with no flags and width of 10:\033[0m\n");
	ft_printf("ft_printf: [%10c]\n", 'a');
	printf("   printf: [%10c]\n", 'a');
	
	ft_printf("\n\033[33mTest print char with several value:\033[0m\n");
	ft_printf("ft_printf: [%10c]  [%-10c]  [%42c]\n", 'a', 'b', 'c');
	printf("   printf: [%10c]  [%-10c]  [%42c]\n", 'a', 'b', 'c');
	
	printf("\n\033[36m ----------- LENGTTH TEST -------------- \033[0m\n\n");
	ft_printf_len = ft_printf("test: [%c]\n", 'a');
	printf_len = printf("test: [%c]\n", 'a');
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print char with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("test: [%-10c]\n", 'a');
	printf_len = printf("test: [%-10c]\n", 'a');
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print char with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10c]\n", 'a');
	printf_len = printf("test: [%10c]\n", 'a');
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print char with several value:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10c]  [%-10c]  [%42c]\n", 'a', 'b', 'c');
	printf_len = printf("test: [%10c]  [%-10c]  [%42c]\n", 'a', 'b', 'c');
	test_length(printf_len, ft_printf_len);
}

void	test_print_percent(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\n\033[36m ----------- Test print percent ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a percent:\033[0m\n");
	ft_printf("ft_printf: [%%]\n");
	printf("   printf: [%%]\n");
	
	ft_printf("\n\033[33mTest print percent with flag '-' width of 10:\033[0m\n");
	ft_printf("ft_printf: [%-10%]\n");
	printf("   printf: [%-10%]\n");
	
	ft_printf("\n\033[33mTest print percent with no flags and width of 10:\033[0m\n");
	ft_printf("ft_printf: [%10%]\n");
	printf("   printf: [%10%]\n");
	
	ft_printf("\n\033[33mTest print percent with several value:\033[0m\n");
	ft_printf("ft_printf: [%10%]  [%-10%]  [%42%]\n");
	printf("   printf: [%10%]  [%-10%]  [%42%]\n");
	
	printf("\n\033[36m ----------- LENGTTH TEST -------------- \033[0m\n\n");
	ft_printf_len = ft_printf("test: [%%]\n");
	printf_len = printf("test: [%%]\n");
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print percent with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("test: [%-10%]\n");
	printf_len = printf("test: [%-10%]\n");
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print percent with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10%]\n");
	printf_len = printf("test: [%10%]\n");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print percent with several value:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10%]  [%-10%]  [%42%]\n");
	printf_len = printf("test: [%10%]  [%-10%]  [%42%]\n");
	test_length(printf_len, ft_printf_len);
}

void	test_print_string(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\n\033[36m ----------- Test print string ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a string:\033[0m\n");
	ft_printf("ft_printf: [%s]\n", "coucou");
	printf("   printf: [%s]\n", "coucou");
	
	ft_printf("\n\033[33mprint a string, in a string:\033[0m\n");
	ft_printf("ft_printf: [%s], comment ça va?\n", "coucou");
	printf("   printf: [%s], comment ça va?\n", "coucou");

	printf("\n\033[33mTest print string NULL value:\033[0m\n");
	ft_printf("ft_printf: [%10s]\n", NULL);
	printf("   printf: [%10s]\n", NULL);
	
	ft_printf("\n\033[33mTest print string with flag '-' width of 10:\033[0m\n");
	ft_printf("ft_printf: [%-10s]\n", "coucou");
	printf("   printf: [%-10s]\n", "coucou");
	
	ft_printf("\n\033[33mTest print string with flag '-' width of 10 and precision of 3:\033[0m\n");
	ft_printf("ft_printf: [%-10.3s]\n", "coucou");
	printf("   printf: [%-10.3s]\n", "coucou");
	
	ft_printf("\n\033[33mTest print string with no flags and width of 10:\033[0m\n");
	ft_printf("ft_printf: [%10s]\n", "coucou");
	printf("   printf: [%10s]\n", "coucou");
	
	ft_printf("\n\033[33mTest print string with no flags, width of 10 and precision of 3:\033[0m\n");
	ft_printf("ft_printf: [%10.3s]\n", "coucou");
	printf("   printf: [%10.3s]\n", "coucou");
	
	ft_printf("\n\033[33mTest print string with several value:\033[0m\n");
	ft_printf("ft_printf: [%10s]  [%-10s]  [%42s]  [%10.3s]  [%-10s]\n", "coucou", "coucou", "coucou", "coucou", "coucou");
	printf("   printf: [%10s]  [%-10s]  [%42s]  [%10.3s]  [%-10s]\n", "coucou", "coucou", "coucou", "coucou", "coucou");
	
	printf("\n\033[36m ----------- LENGTTH TEST -------------- \033[0m\n\n");
	ft_printf_len = ft_printf("test: [%s]\n", "coucou");
	printf_len = printf("test: [%s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mprint a string, in a string:\033[0m\n");
	ft_printf_len = ft_printf("test: [%s], comment ça va?\n", "coucou");
	printf_len = printf("test: [%s], comment ça va?\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string NULL value\033[0m\n");
	ft_printf_len = ft_printf("test: [%10s]\n", NULL);
	printf_len = printf("test: [%10s]\n", NULL);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print string with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("test: [%-10s]\n", "coucou");
	printf_len = printf("test: [%-10s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string with flag '-' width of 10 and precision of 3:\033[0m\n");
	ft_printf_len = ft_printf("test: [%-10.3s]\n", "coucou");
	printf_len = printf("test: [%-10.3s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print string with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10s]\n", "coucou");
	printf_len = printf("test: [%10s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string with no flags, width of 10 and precision of 3:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10.3s]\n", "coucou");
	printf_len = printf("test: [%10.3s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string with several value:\033[0m\n");
	ft_printf_len = ft_printf("test: [%10s]  [%-10s]  [%42s]  [%10.3s]  [%-10s]\n", "coucou", "coucou", "coucou", "coucou", "coucou");
	printf_len = printf("test: [%10s]  [%-10s]  [%42s]  [%10.3s]  [%-10s]\n", "coucou", "coucou", "coucou", "coucou", "coucou");
	test_length(printf_len, ft_printf_len);
}