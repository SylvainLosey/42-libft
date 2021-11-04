/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:44:11 by slosey            #+#    #+#             */
/*   Updated: 2021/10/27 15:44:12 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*current;

	current = NULL;
	while (*s)
	{
		if (*s == c)
			current = (char *) s;
		s++;
	}
	if (*s == c)
		current = (char *) s;
	return (current);
}
