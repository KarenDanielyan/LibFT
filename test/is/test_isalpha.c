/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:48:58 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/15 16:37:45 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define TEST_COUNT 10

static int char_gen(void)
{
	srand(time(NULL));
	return ((rand() % 95) + 32);
}

static void helper(char c)
{
	if ((isalpha(c) && ft_isalpha(c)) ||
		(!isalpha(c) && !ft_isalpha(c)))
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
}

void test_isalpha(void)
{
	int i;

	i = 0;
	printf("ft_isalpha: ");
	while (i < TEST_COUNT)
	{
		helper(char_gen());
		i++;
	}
	printf("\033[0m\n");
}