/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:06:19 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/17 22:56:47 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_delim(char c, char const *set)
{
	char	*i;

	i = (char *)set;
	while (*i)
	{
		if (c == *i)
			return (1);
		i++;
	}
	return (0);
}

static char	*to_trim(char *loc, int direction, char const *set)
{
	while (is_delim(*loc, set))
	{
		if (direction)
			loc ++;
		else
			loc --;
	}
	return (loc);
}

/*
*	Reference: DNE
*
*	Description: Allocates (with malloc()) and returns a copy of
*	’s1’ with the characters specified in ’set’ removed
*	from the beginning and the end of the string.
*
*	Return Value: Allocated string, NULL if alloc fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*b;
	char	*e;
	char	*trim;

	b = to_trim((char *)s1, 1, set);
	e = to_trim((char *)(s1 + ft_strlen(s1) - 1), 0, set) + 1;
	if (b > e)
		return (malloc(0));
	trim = (char *)malloc ((int)(e - b + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, b, (e - b + 1));
	return (trim);
}
