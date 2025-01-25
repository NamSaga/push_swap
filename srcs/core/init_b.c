/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:05:31 by rmamisoa          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/23 08:50:07 by rmamisoa         ###   ########.fr       */
=======
/*   Updated: 2025/01/21 08:15:51 by rmamisoa         ###   ########.fr       */
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

<<<<<<< HEAD
static void	set_b(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*pos_a;
	t_stack_node	*target_node;
	long			matching;

	while (b)
	{
		matching = LONG_MAX;
		pos_a = a;
		while (pos_a)
		{
			if (pos_a->data > b->data && pos_a->data < matching)
			{
				matching = pos_a->data;
				target_node = pos_a;
			}
			pos_a = pos_a->next;
		}
		if (matching == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	init_b(t_stack_node *a, t_stack_node *b)
{
	current_pos(a);
	current_pos(b);
	set_b(a, b);
}
=======
static void set_target_b(t_stack_node *a, t_stack_node *b)
{
    t_stack_node    *current_a;
    t_stack_node    *target_node;
    long            best_match_index;

    while (b)
    {
        best_match_index = LONG_MAX;
        current_a = a;
        while (current_a)
        {
            if (current_a->nbr > b->nbr && current_a->nbr < best_match_index)
            {
                best_match_index = current_a->nbr;
                target_node = current_a;
            }
            current_a = current_a->next;
        }
        if (best_match_index == LONG_MAX)
            b->target_node = find_min(a);
        else
            b->target_node = target_node;
        b = b->next;
    }
}

void    init_nodes_b(t_stack_node *a, t_stack_node *b)
{
    current_index(a);
    current_index(b);
    set_target_b(a, b);
}

>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
