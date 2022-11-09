/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnrcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 00:03:57 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/05 00:35:51 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(char *s1, char *s2, unsigned int n)
{
	int	res;
	int	res_std;
	t_string rev1;
	t_string rev2;

	res = ft_strnrcmp(s1, s2, n);
	rev1 = ft_strrev(s1);
	rev2 = ft_strrev(s2);
	res_std = strncmp(rev1, rev2, n);
	free(rev1);
	free(rev2);
	printf("ft_strncmp(\"%s\", \"%s\", %d) = %d\n   ", s1, s2, n, res);
	printf("strncmp(\"%s\", \"%s\", %d) = %d\n", s1, s2, n, res_std);
}

void	test_strnrcmp(void)
{
	printf("Testing ft_strnrcmp:\n");
	helper("ABC", "abc", 0);
	helper("ABC", "ABZ", 1);
	helper("ABC", "ABZ", 2);
	helper("ABC", "ABZ", 3);
	helper("ABC\200", "ABC", 4);
	helper("ABCDEF", "ABCEFG", 3);
	helper("ABC\200EF", "ABC\170EF", 5);
	helper("", "ABCБEF", 5);
	helper("ABCПEF", "", 5);
}