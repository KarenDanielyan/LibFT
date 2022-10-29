/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:13:51 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 22:55:42 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

void	test_strncpy(void)
{
	char	str[100];

	ft_strncpy(str,
		"If you see this text, then ft_strncpy function works :)\n", 100);
	printf("\nTesting ft_strncpy:\n%s", str);
	printf("Checking for filling of null characters: ");
	if (str[99] == '\0' && str[57] == '\0')
		printf("OK\n");
	else
		printf("Failed\n");
	ft_strncpy(str, "testing that null absent", 10);
	printf("Checking that null character is absent when strlen(src) > n: ");
	if (str[9] != '\0' && str[10] != '\0')
		printf("OK\n");
	else
		printf("Failed\n");
}