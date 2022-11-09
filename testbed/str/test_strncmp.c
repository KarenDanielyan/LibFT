/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:20:32 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/04 22:42:45 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(char *s1, char *s2, unsigned int n)
{
	int	res;
	int	res_std;

	res_std = strncmp(s1, s2, n);
	res = ft_strncmp(s1, s2, n);
	printf("ft_strncmp(\"%s\", \"%s\", %d) = %d\n   ", s1, s2, n, res);
	printf("strncmp(\"%s\", \"%s\", %d) = %d\n", s1, s2, n, res_std);
}

void	test_strncmp(void)
{
	printf("Testing ft_strncmp:\n");
	helper("ABC", "abc", 0);
	helper("ABC", "ABZ", 1);
	helper("ABC", "ABZ", 2);
	helper("ABC", "ABZ", 3);
	helper("ABC\200", "ABC", 4);
	helper("ABCDEF", "ABCEFG", 3);
	helper("ABC\200EF", "AB\170EF", 5);
	helper("", "ABCБEF", 5);
	helper("ABCПEF", "", 5);
}