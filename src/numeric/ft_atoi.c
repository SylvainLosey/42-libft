/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:43:37 by slosey            #+#    #+#             */
/*   Updated: 2022/06/03 16:48:06 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\n'
		| c == '\r' || c == '\t' || c == '\v');
}

int	char_to_int(char c)
{
	return (c - 48);
}

long	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	while (is_space(*str))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str))
	{
		if (!result)
			result = char_to_int(*str);
		else
			result = (result * 10) + char_to_int(*str);
		str++;
	}
	return (result * sign);
}
