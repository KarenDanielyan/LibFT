/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:40:47 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/29 22:55:45 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
*	Reference: <bsd/string.h>
*	Description: The ft_strlcat() function appends the NUL-terminated string src to the end of dst.
*	It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*
*	Return Value: ft_strlcat() returns the total length of the string it tried to create.
*	That means the initial length of dst plus the length of src.
*	However, if ft_strlcat() traverses size characters without finding a NUL, the length of the string is
*	considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL).
*/
u32	ft_strlcat(t_string dest, t_string src, u32 size)
{
	u32	i;
	u32 dest_len;

	dest_len = (u32)ft_strlen(dest);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	i = 0;
	while (*(src + i) && i + dest_len < size - 1)
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}
	*(dest + dest_len + i) = '\0';
	return (dest_len + ft_strlen(src));
}