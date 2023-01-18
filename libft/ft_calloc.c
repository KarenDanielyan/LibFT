/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:43:20 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 19:25:55 by kdaniely         ###   ########.fr       */
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

	if (nmemb * size > __INT_MAX__ || (nmemb * size - 2) > __INT_MAX__)
		return (NULL);
	ptr = malloc (nmemb * size);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
