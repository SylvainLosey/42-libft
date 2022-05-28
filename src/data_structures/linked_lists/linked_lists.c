/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:54:23 by sylvain           #+#    #+#             */
/*   Updated: 2022/05/28 16:57:21 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void print_list(t_node *head)
{
    t_node *temp = head;

    while (temp != NULL) {
        ft_printf("%d - ", temp->value);
        temp = temp->next;
    }
    ft_printf("\n");
}

t_node  *create_new_node(int value)
{
    t_node *result = malloc(sizeof(t_node));
    result->value = value;
    result->next = NULL;
    return (result);
}

t_node  *insert_at_head(t_node **head, t_node *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return (node_to_insert);

}

t_node  *find_node(t_node *head, int value)
{
    t_node  *temp = head;
    while (temp != NULL)
    {
        if (temp->value == value) return (temp);
        temp = temp->next;
    }
    return (NULL);

}

void  insert_after_node(t_node *node_to_insert_after, t_node *node_to_insert)
{
    node_to_insert->next = node_to_insert_after->next;
    node_to_insert_after->next = node_to_insert;
}