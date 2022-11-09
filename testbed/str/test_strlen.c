/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:32:01 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 16:36:27 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(t_string str)
{
	printf("\"%s\" len: %d", str, ft_strlen(str));
	printf("\n");
}

void	test_strlen(void)
{
	helper("");
	helper("akskdkfjc435");
	helper("123556df\0sdfkjsdkf");
}