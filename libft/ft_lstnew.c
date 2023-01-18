/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:34:03 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/18 13:04:30 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Reference: DNE
*
*	Description: ft_lstnew allocates (with malloc()) and returns a new node.
*	The member variable ’content’ is initialized with
*	the value of the parameter ’content’.  The variable
*	’next’ is initialized to NULL.
*
*	Return Value: The new node.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}
