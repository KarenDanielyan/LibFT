/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:36:36 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 17:31:44 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

void	test_strcpy(void)
{
	char	str[100];

	strcpy(str, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	ft_strcpy(str,
		"If you see this text, then ft_strcpy function works properly.\n");
	printf("Testing ft_strcpy:\n%s", str);
}