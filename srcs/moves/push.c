/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:25 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:11 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void push(t_stack_node **dst, t_stack_node **src)
{
    t_stack_node    *push_node;

    if (!*src)
        return ;
    push_node = *src;
    *src = (*src)->next;
    if (*src)
        (*src)->prev = NULL;
    push_node->prev = NULL;
    if (!*dst)
    {
        *dst = push_node;
        push_node->next = NULL;
    }
    else
    {
        push_node->next = *dst;
        push_node->next->prev = push_node;
        *dst = push_node;
    }
}

void    pa(t_stack_node **a, t_stack_node **b, bool print)
{
<<<<<<< HEAD
	push(a, b);
	if (!print)
		write(1, "pa\n", 3);
=======
    push(a, b); 
    if (!print) 
        write(1, "pa\n", 3);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

void    pb(t_stack_node **b, t_stack_node **a, bool print)
{
<<<<<<< HEAD
	push(b, a);
	if (!print)
		write(1, "pb\n", 3);
=======
    push(b, a);
    if (!print)
        write(1, "pb\n", 3);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

