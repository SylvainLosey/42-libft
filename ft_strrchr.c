/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:44:11 by slosey            #+#    #+#             */
/*   Updated: 2021/12/14 14:43:17 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*current;

	current = NULL;
	while (*s)
	{
		if (*s == (char) c)
			current = (char *) s;
		s++;
	}
	if (*s == (char) c)
		current = (char *) s;
	return (current);
}
