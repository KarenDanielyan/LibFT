/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 01:00:37 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/04 01:12:03 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
* Reference: <string.h>
*
* Description: The ft_strcmp() function compares the two strings s1 and s2.
* The comparison is done using unsigned characters.
*
* Return Value: ft_strcmp() returns an integer, as follows:
*	* 0, if s1 == s2,
*	* (> 0), if s1 > s2,
*	* (< 0), if s1 < s2.
*/
i32	ft_strcmp(t_string s1, t_string s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return ((u8)*s1 - (u8)*s2);
		s1++ ;
		s2++ ;
	}
	return (0);
}
