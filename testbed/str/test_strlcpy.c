/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:15:00 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 22:55:40 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

void initialize(t_string str, u32 size)
{
	u32	i;

	i = 0;
	while (i < size)
	{
		str[i] = 0x7f;
		i++;
	}
}

void	test_strlcpy(void)
{
	char			str[100];
	char			str1[100];
	unsigned int	i;

	initialize(str, 100);
	initialize(str1, 100);
	i = ft_strlcpy(str,
			"If you see this text, then ft_strlcpy function works :)\n", 100);
	printf("\nTesting ft_strlcpy:\nOutput of ft_strlcpy: %s", str);
	printf("Func returned %u bytes. \nChecking for null character: ", i);
	if (str[56] == '\0' && str[57] != '\0')
		printf("OK\n");
	else
		printf("Failed\n");
	i = strlcpy(str1, "If you see this text, then ft_strlcpy function works :)\n", 100);
	printf("Output of strlcpy: %s", str1);
	printf("Func returned %u bytes. \nChecking for null character: ", i);
	if (str1[56] == '\0' && str1[57] != '\0')
		printf("OK\n");
	else
		printf("Failed\n");
	i = ft_strlcpy(str, "testing that null absent", 10);
	printf("%s, function returned %d bytes\n", str, i);
	printf("Checking that null character is present when strlen(src) > n: ");
	if (str[9] == '\0')
		printf("OK\n");
	else
		printf("Failed\n");
	i = strlcpy(str1, "testing that null absent", 10);
	printf("%s, function returned %d bytes\n", str1, i);
	printf("Checking that null character is present when strlen(src) > n: ");
	if (str1[9] == '\0')
		printf("OK\n");
	else
		printf("Failed\n");
	i = ft_strlcpy(str, "testing that null absent", 0);
	printf("%s, function returned %d bytes\n", str, i);
	printf("Checking that null character is not present when size == 0: ");
	if (str[0] != '\0' && str[9] == '\0')
		printf("OK\n");
	else
		printf("Failed\n");
	i = strlcpy(str, "testing that null absent", 0);
	printf("%s, function returned %d bytes\n", str1, i);
	printf("Checking that null character is not present when size == 0: ");
	if (str1[0] != '\0' && str1[9] == '\0')
		printf("OK\n");
	else
		printf("Failed\n");
}