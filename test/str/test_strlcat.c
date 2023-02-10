/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:18:30 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 17:12:48 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	helper(char *s1, char *s2, unsigned int n)
{
	char			d1[100];
	char			d2[100];
	unsigned int	res1;
	unsigned int	res2;

	strcpy(d1, s1);
	strcpy(d2, s1);
	res1 = ft_strlcat(d1, s2, n);
	res2 = strlcat(d2, s2, n);
	if ((res1 == res2) && strcmp(d1, d2) == 0)
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

void	test_strlcat(void)
{
	printf("ft_strlcat: ");
	helper("dest", "", 4);
	helper("", "source", 5);
	helper("dst", "src", 0);
	helper("dst", "src", 1);
	helper("dst", "src", 2);
	helper("dst", "src", 3);
	helper("dst", "src", 4);
	helper("dst", "src", 5);
	helper("dst", "src", 6);
	helper("dst", "src", 7);
	helper("dst", "src", 8);
	helper("ABCDEF", "ABCEFG", 3);
	helper("ABCПEF", "ABCБEF", 11);
	helper("ABCПEF", "ABCБEF", 20);
	printf("\033[0m\n");
}
