/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:10:45 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 15:17:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#define TEST_SIZE 100

static void helper(int val)
{
	char	buf_std[TEST_SIZE];
	char	buf_ft[TEST_SIZE];

	memset(buf_std, val, sizeof buf_std);
	ft_memset(buf_ft, val, sizeof buf_ft);
	if (memcmp(buf_std, buf_ft, sizeof(buf_ft)) == 0)
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

void test_memset(void)
{
	printf("ft_memset: ");
	/* 1 byte value */
	helper(42);
	/* >1 byte value */
	helper(1024);
	printf("\033[0m\n");
}
