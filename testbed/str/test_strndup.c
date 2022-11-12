/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strndup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:37:12 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/12 20:41:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_str.h"

static void	helper(void)
{
	char	*test = "If you see this text, then ft_strndup function works!\n";
	char	*str;

	str = ft_strndup(test, ft_strlen(test));
	printf("Testing strdup:\n%s", str);
}

void	test_strndup(void)
{
	helper();
}