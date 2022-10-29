/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:36:07 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 23:54:33 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int main()
{
	test_strlen();
	printf("\n");
	test_strcpy();
	printf("\n");
	test_strncpy();
	printf("\n");
	test_strlcpy();
	printf("\n");
	test_strcat();
	printf("\n");
	test_strncat();
	printf("\n");
	test_strlcat();
	printf("\n");
	return (0);
}