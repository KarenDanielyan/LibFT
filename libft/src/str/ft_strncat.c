/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:17:59 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/30 00:06:24 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
*	Reference: <string.h>
*
*	Description: The ft_strncat() is similar to ft_strcat(), except that:
*		1. It will use at most n bytes from src,
*		2. src does not need to be null-terminated if it contains n or more bytes.
*	As with strcat(), the resulting string in dest is always null-terminated.
*
*	Return Value: Pointer to resulting string dest.
*/
t_string	ft_strncat(t_string dest, t_string src, u32 size)
{
	u32	i;
	u32	j;

	i = ft_strlen(dest);
	j = 0;
	while (*(src + j) && j < size)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
