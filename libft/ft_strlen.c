/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:39:43 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/14 19:20:39 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <string.h>
*
*	Description: ft_strlen calculates the length of the string pointed by str,
*	excluding the nul-terminating character '\0'.
*
*	Return Value: Number of bytes pointed by str.
*/
size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len ++;
	return (len);
}		