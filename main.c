/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebrandt <benoit.brandt@proton.me>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:47:48 by bebrandt          #+#    #+#             */
/*   Updated: 2023/10/30 15:57:30 by bebrandt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_print_char(void);
void	test_print_percent(void);
void	test_print_string(void);
void	test_print_hex_lowercase(void);
void	test_print_hex_uppercase(void);
void	test_print_uint(void);

int		main(void)
{
	// test_print_char();
	// test_print_percent();
	// test_print_string();
	// test_print_hex_lowercase();
	// test_print_hex_uppercase();
	test_print_uint();
	// ft_printf("[%s]\n", ft_itoa_hex(-874521));
	// printf("[%x]\n", -874521);
	// int	count;
	// count = ft_printf("Hello%++00--  ##.c--%dWorld!\n", 33, 24);
	// printf("count: %d\n", count);
	// printf("[%10.2s]\n", "hello");
	// printf("[%+++++++0000+++00004d]\n", 42);
	// printf("[%-4i]\n", 42);
	// printf("[%10.8s]\n", "coucou");
	// printf("\033[31m[%#-12x]\033[0m\n", -10);
	// printf("[%25p]\n", &count);
	// printf("[%010u]\n", 42);
	// printf("[%10c]\n", 'a');
	// printf("[%010%]\n");
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
	ft_printf_len = ft_printf("ft_printf: [%c]\n", 'a');
	printf_len = printf("***printf: [%c]\n", 'a');
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print char with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10c]\n", 'a');
	printf_len = printf("***printf: [%-10c]\n", 'a');
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print char with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10c]\n", 'a');
	printf_len = printf("***printf: [%10c]\n", 'a');
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print char with several value:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10c]  [%-10c]  [%42c]\n", 'a', 'b', 'c');
	printf_len = printf("***printf: [%10c]  [%-10c]  [%42c]\n", 'a', 'b', 'c');
	test_length(printf_len, ft_printf_len);
}

void	test_print_percent(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\n\033[36m ----------- Test print percent ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a percent:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%%]\n");
	printf_len = printf("***printf: [%%]\n");
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print percent with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10%]\n");
	printf_len = printf("***printf: [%-10%]\n");
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print percent with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10%]\n");
	printf_len = printf("***printf: [%10%]\n");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print percent with several value:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10%]  [%-10%]  [%42%]\n");
	printf_len = printf("***printf: [%10%]  [%-10%]  [%42%]\n");
	test_length(printf_len, ft_printf_len);
}

void	test_print_string(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\n\033[36m ----------- Test print string ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a string:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%s]\n", "coucou");
	printf_len = printf("***printf: [%s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mprint a string, in a string:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%s], comment ça va?\n", "coucou");
	printf_len = printf("***printf: [%s], comment ça va?\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string NULL value\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10s]\n", NULL);
	printf_len = printf("***printf: [%10s]\n", NULL);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print string with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10s]\n", "coucou");
	printf_len = printf("***printf: [%-10s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string with flag '-' width of 10 and precision of 3:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10.3s]\n", "coucou");
	printf_len = printf("***printf: [%-10.3s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print string with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10s]\n", "coucou");
	printf_len = printf("***printf: [%10s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string with no flags, width of 10 and precision of 3:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10.3s]\n", "coucou");
	printf_len = printf("***printf: [%10.3s]\n", "coucou");
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print string with several value:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10s]  [%-10s]  [%42s]  [%10.3s]  [%-10s]\n", "coucou", "coucou", "coucou", "coucou", "coucou");
	printf_len = printf("***printf: [%10s]  [%-10s]  [%42s]  [%10.3s]  [%-10s]\n", "coucou", "coucou", "coucou", "coucou", "coucou");
	test_length(printf_len, ft_printf_len);
}

void	test_print_hex_lowercase(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\033[36m ----------- Test print hex with x ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a hex:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%x]\n", 42);
	printf_len = printf("***printf: [%x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10x]\n", 42);
	printf_len = printf("***printf: [%-10x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10x]\n", 42);
	printf_len = printf("***printf: [%10x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with flag '0' flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%010x]\n", 42);
	printf_len = printf("***printf: [%010x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with flags '0', '#' flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%0#10x]\n", 42);
	printf_len = printf("***printf: [%0#10x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with '-', '#' and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-#10x]\n", 42);
	printf_len = printf("***printf: [%-#10x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with '-', '#', width of 10 and precison of 5:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-#10.5x]\n", 42);
	printf_len = printf("***printf: [%-#10.5x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with '#', width of 10 and precison of 5:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%#10.5x]\n", 42);
	printf_len = printf("***printf: [%#10.5x]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print hex with several value:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10x]  [%-10x]  [%42x]  [%010x]  [%0#10x]  [%-#10x] [%-#10.5x]  [%#10.5x]\n", 42, 24, 88, 32, -10, -1000, 255, 78632);
	printf_len = printf("***printf: [%10x]  [%-10x]  [%42x]  [%010x]  [%0#10x]  [%-#10x] [%-#10.5x]  [%#10.5x]\n", 42, 24, 88, 32, -10, -1000, 255, 78632);
	test_length(printf_len, ft_printf_len);
}

void	test_print_hex_uppercase(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\033[36m ----------- Test print hex with X ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a hex:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%X]\n", 42);
	printf_len = printf("***printf: [%X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10X]\n", 42);
	printf_len = printf("***printf: [%-10X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10X]\n", 42);
	printf_len = printf("***printf: [%10X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with flag '0' flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%010X]\n", 42);
	printf_len = printf("***printf: [%010X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with flags '0', '#' flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%0#10X]\n", 42);
	printf_len = printf("***printf: [%0#10X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with '-', '#' and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-#10X]\n", 42);
	printf_len = printf("***printf: [%-#10X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with '-', '#', width of 10 and precison of 5:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-#10.5X]\n", 42);
	printf_len = printf("***printf: [%-#10.5X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print hex with '#', width of 10 and precison of 5:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%#10.5X]\n", 42);
	printf_len = printf("***printf: [%#10.5X]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print hex with several value:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10X]  [%-10X]  [%42X]  [%010X]  [%0#10X]  [%-#10X] [%-#10.5X]  [%#10.5X]\n", 42, 24, 88, 32, -10, -1000, 255, 78632);
	printf_len = printf("***printf: [%10X]  [%-10X]  [%42X]  [%010X]  [%0#10X]  [%-#10X] [%-#10.5X]  [%#10.5X]\n", 42, 24, 88, 32, -10, -1000, 255, 78632);
	test_length(printf_len, ft_printf_len);
}

void	test_print_uint(void)
{
	int	ft_printf_len;
	int	printf_len;

	printf("\033[36m ----------- Test print unsigned int ----------- \033[0m\n");
	ft_printf("\n\033[33mprint only a unsigne int:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%u]\n", 42);
	printf_len = printf("***printf: [%u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with flag '-' width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10u]\n", 42);
	printf_len = printf("***printf: [%-10u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with no flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10u]\n", 42);
	printf_len = printf("***printf: [%10u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with flag '0' flags and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%010u]\n", 42);
	printf_len = printf("***printf: [%010u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with flags '0' and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%010u]\n", 42);
	printf_len = printf("***printf: [%010u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with '-' and width of 10:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10u]\n", 42);
	printf_len = printf("***printf: [%-10u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with '-', width of 10 and precison of 5:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%-10.5u]\n", 42);
	printf_len = printf("***printf: [%-10.5u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	printf("\n\033[33mTest print unsigne int with width of 10 and precison of 5:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10.5u]\n", 42);
	printf_len = printf("***printf: [%10.5u]\n", 42);
	test_length(printf_len, ft_printf_len);
	
	ft_printf("\n\033[33mTest print unsigne int with several value:\033[0m\n");
	ft_printf_len = ft_printf("ft_printf: [%10u]  [%-10u]  [%42u]  [%010u]  [%010u]  [%-10u] [%-10.5u]  [%10.5u]\n", 42, 24, 88, 32, -10, -1000, 255, 78632);
	printf_len = printf("***printf: [%10u]  [%-10u]  [%42u]  [%010u]  [%010u]  [%-10u] [%-10.5u]  [%10.5u]\n", 42, 24, 88, 32, -10, -1000, 255, 78632);
	test_length(printf_len, ft_printf_len);
}