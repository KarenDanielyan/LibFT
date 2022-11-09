/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:39:06 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 23:00:21 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(char *s1, char *s2)
{
	char	d1[100];
	char	d2[100];

	strcpy(d1, s1);
	strcpy(d2, s1);
	ft_strcat(d1, s2);
	strcat(d2, s2);
	printf("ft_strcat(\"%s\", \"%s\") = \"%s\"\n   ", s1, s2, d1);
	printf("strcat(\"%s\", \"%s\") = \"%s\"\n", s1, s2, d2);
}

void	test_strcat(void)
{
	printf("Testing ft_strcat:\n");
	helper("ABC", "ABZ");
	helper("ABC", "ABC");
	helper("ABCП", "ABCБ");
	helper("", "ABCБ");
	helper("ABCП", "");
}