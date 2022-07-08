/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:06:36 by sylvain           #+#    #+#             */
/*   Updated: 2022/07/08 13:09:14 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int base, int exponent)
{
	if (exponent == 0)
		return (1);
	else if (exponent < 0)
		return (1 / ft_pow(base, -exponent));
	else
		return (base * ft_pow(base, exponent - 1));
}
