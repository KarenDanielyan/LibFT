/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:39:18 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 22:37:41 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

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
	printf("ft_strlcat(\"%s\", \"%s\", %d) =", s1, s2, n);
	printf("\t%u, \"%s\",\t", res1, d1);
	printf("strlcat(\"%s\", \"%s\", %d) = \t%d, \"%s\"\n", s1, s2, n, res2, d2);
}

void	test_strlcat(void)
{
	printf("Testing ft_strlcat:\n");
	helper("dest", "", 19999);
	helper("", "source", 10000);
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
}