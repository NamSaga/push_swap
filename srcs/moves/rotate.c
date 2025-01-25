/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:28 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:13 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void rotate(t_stack_node **stack)
{
    t_stack_node    *last_node;

    if (!*stack || !(*stack)->next)
        return ;
    last_node = find_last(*stack); 
    last_node->next = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    last_node->next->prev = last_node;
    last_node->next->next = NULL;
}       

void    ra(t_stack_node **a, bool print)
{
    rotate(a);
    if (!print)
        write(1, "ra\n", 3);
}

void    rb(t_stack_node **b, bool print)
{
<<<<<<< HEAD
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rr(a, b, false);
	current_pos(*a);
	current_pos(*b);
=======
    rotate(b);
    if (!print)
        write(1, "rb\n", 3);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

void    rr(t_stack_node **a, t_stack_node **b, bool print)
{
<<<<<<< HEAD
	rotate(a);
	if (!print)
		write(1, "ra\n", 3);
}

void	rb(t_stack_node **b, bool print)
{
	rotate(b);
	if (!print)
		write(1, "rb\n", 3);
}

void	rr(t_stack_node **a, t_stack_node **b, bool print)
{
	rotate(a);
	rotate(b);
	if (!print)
		write(1, "rr\n", 3);
}
=======
    rotate(a);
    rotate(b);
    if (!print)
        write(1, "rr\n", 3);
}

>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
