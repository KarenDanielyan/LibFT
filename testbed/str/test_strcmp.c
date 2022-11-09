/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:12:43 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/04 01:15:14 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void helper(char *s1, char *s2)
{
	int	res;
	int	res_std;

	res_std = strcmp(s1, s2);
	res = ft_strcmp(s1, s2);
	printf("ft_strcmp(\"%s\", \"%s\") = \t%d\n   ", s1, s2, res);
	printf("strcmp(\"%s\", \"%s\") = \t%d\n", s1, s2, res_std);
}

void	test_strcmp(void)
{
	printf("Testing ft_strcmp:\n");
	helper("ABC", "ABZ");
	helper("ABC\200", "ABC");
	helper("ABC", "ABC");
	helper("ABCП", "ABCБ");
	helper("", "ABCБ");
	helper("ABCП", "");
}