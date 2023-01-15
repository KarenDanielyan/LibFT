/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:11:23 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 02:35:32 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void free_2d(char **split)
{
	int i = 0;
	while (*(split + i))
	{
		free (*(split + i));
		i ++;
	}
	free (split);
}

static void helper(short cond)
{
	if (cond)
	{
		printf("\033[1;32m");
		printf("[OK] ");
	}
	else
	{
		printf("\033[1;31m");
		printf("[KO] ");		
	}
}

void test_split(void)
{
	char *input = "";
	char delimiter = ' ';

	printf("ft_split: ");
	// Empty String
	char **output = ft_split(input, delimiter);
	helper(output[0] == NULL);
	free_2d(output);
	// Single Delimiter
	input = ";";
	delimiter = ';';
	output = ft_split(input, delimiter);
	helper(output[0] == NULL);
	free_2d(output);
	// Multiple Delimiters
	input = ";;;";
	delimiter = ';';
	output = ft_split(input, delimiter);
	helper(output[0] == NULL);
	free_2d(output);
	// No Delimiters
	input = "Hello World";
	delimiter = ';';
	output = ft_split(input, delimiter);
	helper(strcmp(output[0], "Hello World") == 0);
	free_2d(output);
	// Multiple substrings
	input = "Hello;World;";
	delimiter = ';';
	output = ft_split(input, delimiter);
	helper((strcmp(output[0], "Hello") == 0) && (strcmp(output[1], "World") == 0) && (output[2] == NULL));
	free_2d(output);
	printf("\033[0m\n");
}
