/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:25:27 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 15:17:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	helper(char *s1, char *s2, unsigned int n)
{
	int	res;
	int	res_std;

	res_std = memcmp(s1, s2, n);
	res = ft_memcmp(s1, s2, n);
	if (res == res_std)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");
	}
	printf("\033[0m");
}

void	test_memcmp(void)
{
	printf("ft_memcmp: ");
	helper("ABC", "abc", 0);
	helper("ABC", "ABZ", 1);
	helper("ABC", "ABZ", 2);
	helper("ABC", "ABZ", 3);
	helper("ABC\200", "ABC", 4);
	helper("ABCDEF", "ABCEFG", 3);
	helper("ABC\200EF", "AB\170EF", 5);
	helper("", "ABCБEF", 5);
	helper("ABCПEF", "", 5);
	printf("\n");
}
