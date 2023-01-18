/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:44:20 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 11:54:47 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: DNE
*
*	Description: ft_substr() allocates (with malloc()) and returns a substring
*	from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*
*	Return Value: The substring. NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !str)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (*(s + start + i) && i < len)
		{
			*(str + i) = *(s + start + i);
			i++;
		}
	}
	*(str + i) = '\0';
	return (str);
}
