/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sqrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:35:35 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/28 14:13:21 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_math.h"

void	test_sqrt(void)
{
	printf("sqrt(%d): %d\n", 4, ft_sqrt(4));
	printf("sqrt(%d): %d\n", 7, ft_sqrt(7));
	printf("sqrt(%d): %d\n", 81, ft_sqrt(81));
	printf("sqrt(%d): %d\n", 1073741824, ft_sqrt(1073741824));
	printf("sqrt(%d): %d\n", 9, ft_sqrt(9));
	printf("sqrt(%d): %d\n", -34, ft_sqrt(-34));
}