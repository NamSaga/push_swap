/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:05:31 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:07 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

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
