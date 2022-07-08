/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stritercount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:53:36 by sylvain           #+#    #+#             */
/*   Updated: 2022/07/08 13:11:58 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function traverses a string and counts the number of times 
// the function taken as parameter returns true
int	ft_stritercount(char *str, bool (*f)(int))
{
	int	i;

	i = 0;
	while (*str)
	{
		if (f(*str))
			i++;
		str++;
	}
	return (i);
}
