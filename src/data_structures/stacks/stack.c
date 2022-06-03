/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:13:03 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 14:12:20 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	push(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (false);
	new_node->value = value;
	new_node->next = *stack;
	*stack = new_node;
	return (true);
}

bool	pop(t_stack *stack)
{
	t_stack	*tmp;

	if (*stack == NULL)
		return (false);
	tmp = stack;
	*stack = (*stack)->next;
	free(tmp);
	return (true);
}

void	print_stack(t_stack *stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

int	stack_length(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
