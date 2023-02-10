/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:48:58 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 15:16:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define TEST_COUNT 10

static void print_failed(char cases[TEST_COUNT])
{
	int	i;

	i = 0;
	while (i < TEST_COUNT)
	{
		if (cases[i] != -1)
		{
			printf("Failed test number %d, Tested value: %c\n", i, cases[i]);
		}
		i++;
	}
}

static int char_gen(void)
{
	srand(time(NULL));
	return ((rand() % 95) + 32);
}

char helper(char c, int (*std)(int c), int (*ft)(int c))
{
	if (((*std)(c) != 0 && (*ft)(c) != 0) ||
		((*std)(c) == 0 && (*ft)(c) == 0))
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

void test_isalpha(void)
{
	int i;
	char failed_cases[TEST_COUNT];

	i = 0;
	printf("ft_isalpha: ");
	while (i < TEST_COUNT)
	{
		failed_cases[i] = helper(char_gen(), &isalpha, &ft_isalpha);
		i++;
	}
	printf("\033[0m\n");
	print_failed(failed_cases);
}

void test_isdigit(void)
{
	int i;
	char failed_cases[TEST_COUNT];

	i = 0;
	printf("ft_isdigit: ");
	while (i < TEST_COUNT)
	{
		failed_cases[i] = helper(char_gen(), &isdigit, &ft_isdigit);
		i++;
	}
	printf("\033[0m\n");
	print_failed(failed_cases);
}

void test_isalnum(void)
{
	int i;
	char failed_cases[TEST_COUNT];

	i = 0;
	printf("ft_isalnum: ");
	while (i < TEST_COUNT)
	{
		failed_cases[i] = helper(char_gen(), &isalnum, &ft_isalnum);
		i++;
	}
	printf("\033[0m\n");
	print_failed(failed_cases);
}

void test_isprint(void)
{
	int i;
	char failed_cases[TEST_COUNT];

	i = 0;
	printf("ft_isprint: ");
	while (i < TEST_COUNT)
	{
		failed_cases[i] = helper(char_gen(), &isprint, &ft_isascii);
		i++;
	}
	printf("\033[0m\n");
	print_failed(failed_cases);
}

void test_isascii(void)
{
	printf("ft_isascii: ");
	if (ft_isascii(54) != 0)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
	if (ft_isascii(204) == 0)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
	printf("\033[0m\n");
}
