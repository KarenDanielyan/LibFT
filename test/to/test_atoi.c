/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:02:51 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/16 01:32:07 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void    helper(char *str)
{
       if (ft_atoi(str) == atoi(str))
	   {
			printf("\033[1;32m");
			printf("[OK] ");
	   }
	   else
	   {
			printf("\033[1;31m");
			printf("[KO] ");
	   }
	   printf("\033[0m");
}

void test_atoi(void)
{
		printf("ft_atoi: ");
        helper("  \r  +-+-+-+-2147483647");
        helper("  ++++++---++++++2147483647");
        helper("           -2147483648");
        helper("4");
        helper("");
        helper("-21235523452345236");
        helper("1234abo23");
		helper("+123423");
        helper("1239");
        helper("1200");
		printf("\n");
}