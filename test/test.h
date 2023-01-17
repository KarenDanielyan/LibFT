/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:00:01 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/17 22:46:22 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <limits.h>
# include <stdio.h>
# include <time.h>
# include <ctype.h>
# include <libft.h>

/* GLibC functions */ // TODO: Tests for memmove, memcpy, memchr, calloc
void	test_strlen(void);
void	test_strchr(void);
void	test_strdup(void);
void	test_strncmp(void);
void	test_strnstr(void);
void	test_strlcpy(void);
void	test_strlcat(void);
void	test_isalpha(void);
void	test_isdigit(void);
void	test_isalnum(void);
void	test_isprint(void);
void	test_isascii(void);
void	test_tolower(void);
void	test_toupper(void);
void	test_memset(void);
void	test_memcmp(void);
void	test_atoi(void);
/* Additional Functions */ // TODO: 
void	test_split(void);
void	test_itoa(void);
void	test_strtrim(void);
#endif
