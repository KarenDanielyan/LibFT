/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:39:33 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 23:52:24 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(char *s1, char *s2, unsigned int n)
{
	char	d1[100];
	char	d2[100];

	strcpy(d1, s1);
	strcpy(d2, s1);
	ft_strncat(d1, s2, n);
	strncat(d2, s2, n);
	printf("ft_strncat(\"%s\", \"%s\", %d) = \t\"%s\"\n", s1, s2, n, d1);
	printf("strncat(\"%s\", \"%s\", %d) = \t\"%s\"\n", s1, s2, n, d2);
}

void	test_strncat(void)
{
	printf("Testing ft_strncat:\n");
	helper("ABC", "ABZ", 3);
	helper("ABCDEF", "ABCEFG", 3);
	helper("ABCПEF", "ABCБEF", 5);
	helper("", "ABCБEF", 4);
	helper("ABCПEF", "", 5);
}
