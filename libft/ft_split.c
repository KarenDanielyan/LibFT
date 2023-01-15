/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:51:09 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 01:59:58 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_is_delim(char c, char delimiter)
{
	if (c == delimiter)
		return (1);
	return (0);
}

int	ft_strlen_delim(const char *str, char delimiter)
{
	int	i;

	i = 0;
	while (*(str + i) && !_is_delim(*(str + i), delimiter))
	{
		i++;
	}
	return (i);
}

int	count_splits(const char *str, char delimiter)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*(str + i))
	{
		while (*(str + i) && _is_delim(*(str + i), delimiter))
			i++;
		if (*(str + i))
			count++;
		while (*(str + i) && !_is_delim(*(str + i), delimiter))
			i++;
	}
	return (count);
}

char	*get_word(const char *str, char delimiter)
{
	int		word_len;
	int		i;
	char	*word;

	i = 0;
	word_len = ft_strlen_delim(str, delimiter);
	word = (char *)malloc((word_len + 1) * sizeof(char));
	while (i < word_len)
	{
		*(word + i) = *(str + i);
		i++;
	}
	*(word + i) = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	i = 0;
	strings = malloc((count_splits(s, c) + 1) * sizeof(char *));
	while (*s)
	{
		while (*s && _is_delim(*s, c))
			s++;
		if (*s)
		{
			*(strings + i) = get_word(s, c);
			i++;
		}
		while (*s && !_is_delim(*s, c))
			s++;
	}
	*(strings + i) = 0;
	return (strings);
}
