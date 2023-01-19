/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:43:20 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/19 14:52:33 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: <stdlib.h>
*
*	Description: ft_calloc allocates memory for an array of nmemb
*	elements of size bytes each and return a pointer to the
*	allocated memory. The memory is set to zero.
*
*	Return Value: Pointer to the allocated memory.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	siz;

	siz = size * nmemb;
	ptr = malloc (size * nmemb);
	if (!ptr || nmemb == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	bzero(ptr, size * nmemb);
	return (ptr);
}
