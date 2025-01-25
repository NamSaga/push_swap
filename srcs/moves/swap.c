/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:19 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:14 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../inc/push_swap.h"

static void swap(t_stack_node **head)
{
    if (!*head || !(*head)->next)
        return ;
    *head = (*head)->next;
    (*head)->prev->prev = *head;
    (*head)->prev->next = (*head)->next;
    if ((*head)->next)
        (*head)->next->prev = (*head)->prev;
    (*head)->next = (*head)->prev;
    (*head)->prev = NULL;
}

void    sa(t_stack_node **a, bool print)
{
<<<<<<< HEAD
	swap(a);
	if (!print)
		write(1, "sa\n", 3);
=======
    swap(a);
    if (!print)
        write(1, "sa\n", 3);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

void    sb(t_stack_node **b, bool print)
{
<<<<<<< HEAD
	swap(b);
	if (!print)
		write(1, "sb\n", 3);
=======
    swap(b);
    if (!print)
        write(1, "sb\n", 3);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

void    ss(t_stack_node **a, t_stack_node **b, bool print)
{
<<<<<<< HEAD
	swap(a);
	swap(b);
	if (!print)
		write(1, "ss\n", 3);
=======
    swap(a);
    swap(b);
    if (!print)
        write(1, "ss\n", 3);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

