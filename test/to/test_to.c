/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:47:53 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 15:17:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define TEST_LEN 20

char test_str[] = "Lorem IPsum\t dolor\r SiT amet,\n consE\rCteTur AdIpiscing elIT.";

static void print_failed(char cases[TEST_LEN])
{
	int	i;

	i = 0;
	while (i < TEST_LEN)
	{
		if (cases[i] != -1)
		{
			printf("Failed test number %d, test value: %c\n", i, cases[i]);
		}
		i++;
	}
}

static char helper(char c, int (*std)(int c), int (*ft)(int c))
{
	if ((*std)(c) == (*ft)(c))
	{
		printf("\033[1;32m");
		printf("[OK] ");
		return (-1);
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
		return (c);
	}
}

void	test_tolower(void)
{
	int	i;
	char fail_case[TEST_LEN];

	i = 0;
	printf("ft_tolower: ");
	while (test_str[i] && i < TEST_LEN)
	{
		fail_case[i] = helper(test_str[i], &tolower, &ft_tolower);
		i++;
	}
	i = 0;
	printf("\033[0m\n");
	print_failed(fail_case);
}

void	test_toupper(void)
{
	int	i;
	char fail_case[TEST_LEN];

	i = 0;
	printf("ft_toupper: ");
	while (test_str[i] && i < TEST_LEN)
	{
		fail_case[i] = helper(test_str[i], &toupper, &ft_toupper);
		i++;
	}
	i = 0;
	printf("\033[0m\n");
	print_failed(fail_case);
}
