/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:32:58 by kdaniely          #+#    #+#             */
/*   Updated: 2022/11/08 16:53:02 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_STR_H
# define TEST_STR_H
# include <stdio.h>
# include <libft.h>
# include <bsd/string.h>

void	test_strlen(void);
void	test_strcpy(void);
void	test_strncpy(void);
void	test_strlcpy(void);
void	test_strcat(void);
void	test_strncat(void);
void	test_strlcat(void);
void	test_strcmp(void);
void	test_strncmp(void);
void	test_strnrcmp(void);
void	test_strrev(void);
void	test_strdup(void);
#endif