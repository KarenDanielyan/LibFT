/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:35:43 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/15 00:04:45 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <string.h>
*
*	Description: ft_strchr returns a pointer
*	to the first occurrence of the character c 
*	in the string s.
*
*	Return Value: Pointer to the matched
*	character or NULL if not found.
*/
char	*ft_strchr(const char *str, int c)
{
	char	*buf;

	buf = (char *)str;
	while (*buf)
	{
		if (*buf == c)
			return (buf);
		buf++;
	}
	if (*buf == c)
		return (buf);
	else
		return (NULL);
}
