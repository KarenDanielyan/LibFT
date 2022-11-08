/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:50:09 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/08 16:54:40 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(void)
{
	char	*str;

	str = ft_strdup("If you see this text, then ft_strdup function works!\n");
	printf("Testing strdup:\n%s", str);
}

void	test_strdup(void)
{
	helper();
}