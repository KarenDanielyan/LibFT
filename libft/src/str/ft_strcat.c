/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:39:52 by kdaniely          #+#    #+#             */
/*   Updated: 2022/10/30 00:00:34 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

/*
*	Reference: <string.h>
*
*	Description: The  strcat()  function  appends src to dest,
*	overwriting the terminating null byte ('\0') at the end of dest,
*	and then adds a terminating null byte.
*
*	Return Value: Pointer to resulting string dest.
*/
t_string	ft_strcat(t_string dest, t_string src)
{
	int	i;

	i = ft_strlen(dest);
	while (*src)
	{
		*(dest + i) = *src;
		src++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
