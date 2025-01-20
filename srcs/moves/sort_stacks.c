/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:29 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/20 15:59:09 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

static void	atob(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node->mid && cheapest_node->target_node->mid)
		r_both(a, b, cheapest_node);
	else if (!(cheapest_node->target_node->mid) && !(cheapest_node->mid))
		rr_both(a, b, cheapest_node);
	to_push(a, cheapest_node, 'a');
	to_push(b, cheapest_node->target_node, 'b');
	pb(b, a, false);
}

static void	btoa(t_stack_node **a, t_stack_node **b)
{
	to_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	min_on_top(t_stack_node **a)
{
	while (find_min(*a)->data != (*a)->data)
	{
		if (find_min(*a)->mid)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (!stack_sorted(*a) && len_a > 3)
	{
		pb(b, a, false);
		len_a--;
	}
	if (!stack_sorted(*a) && len_a > 3)
	{
		pb(b, a, false);
		len_a--;
	}
	while (!stack_sorted(*a) && len_a > 3)
	{
		init_a(*a, *b);
		atob(a, b);
		len_a--;
	}
	sort_three(a);
	while (*b)
	{
		init_b(*a, *b);
		btoa(a, b);
	}
	current_pos(*a);
	min_on_top(a);
}
