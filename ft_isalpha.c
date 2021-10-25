/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slosey <slosey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:29:56 by slosey            #+#    #+#             */
/*   Updated: 2021/10/25 17:47:15 by slosey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char c)
{
	if ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}