/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:29 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:10 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	atob(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*min_node;

	min_node = get_min(*a);
	if (min_node->mid && min_node->target_node->mid)
		r_both(a, b, min_node);
	else if (!(min_node->mid) && !(min_node->target_node->mid))
		rr_both(a, b, min_node);
	to_push(a, min_node, 'a');
	to_push(b, min_node->target_node, 'b');
	pb(b, a, false);
}

static void	btoa(t_stack_node **a, t_stack_node **b)
{
	to_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	push_min(t_stack_node **a)
{
	while ((*a)->data != find_min(*a)->data)
	{
		if (find_min(*a)->mid)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len;

	len = stack_len(*a);
	if (len-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (len-- > 3 && !stack_sorted(*a))
	{
		init_a(*a, *b);
		atob(a, b);
	}
	mid_sort(a);
	while (*b)
	{
		init_b(*a, *b);
		btoa(a, b);
	}
	current_pos(*a);
	push_min(a);
}
