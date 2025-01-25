/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:27 by rmamisoa          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/23 08:50:12 by rmamisoa         ###   ########.fr       */
=======
/*   Updated: 2025/01/21 08:15:47 by rmamisoa         ###   ########.fr       */
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void rev_rotate(t_stack_node **stack)
{
    t_stack_node    *last;

    if (!*stack || !(*stack)->next) 
        return ;
    last = find_last(*stack);
    last->prev->next = NULL;
    last->next = *stack;
    last->prev = NULL;
    *stack = last;
    last->next->prev = last;
}

void    rra(t_stack_node **a, bool print)
{
    rev_rotate(a);
    if (!print)
        write(1, "rra\n", 4);
}

void    rrb(t_stack_node **b, bool print)
{
<<<<<<< HEAD
	rev_rotate(a);
	if (!print)
		write(1, "rra\n", 4);
=======
    rev_rotate(b);
    if (!print)
        write(1, "rrb\n", 4);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

void    rrr(t_stack_node **a, t_stack_node **b, bool print)
{
<<<<<<< HEAD
	rev_rotate(b);
	if (!print)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		write(1, "rrr\n", 4);
}
=======
    rev_rotate(a);
    rev_rotate(b);
    if (!print)
        write(1, "rrr\n", 4);
}

>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
