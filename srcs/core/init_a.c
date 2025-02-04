/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:44:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:06 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	current_pos(t_stack_node *stack)
{
	int	i;
	int	mid_pos;

	i = 0;
	if (!stack)
		return ;
	mid_pos = stack_len(stack) / 2;
	while (stack)
	{
		stack->pos = i;
		stack->mid = (i <= mid_pos);
		stack = stack->next;
		++i;
	}
}

static void	set_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*pos_b;
	t_stack_node	*target_node;
	long			matching;

	while (a)
	{
		matching = LONG_MIN;
		pos_b = b;
		while (pos_b)
		{
			if (pos_b->data < a->data && pos_b->data > matching)
			{
				matching = pos_b->data;
				target_node = pos_b;
			}
			pos_b = pos_b->next;
		}
		if (matching == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	check_a(t_stack_node *a, t_stack_node *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->push_cost = a->pos;
		if (!(a->mid))
			a->push_cost = len_a - (a->pos);
		if (a->target_node->mid)
			a->push_cost += a->target_node->pos;
		else
			a->push_cost += len_b - (a->target_node->pos);
		a = a->next;
	}
}

void	set_min(t_stack_node *stack)
{
	long			min_value;
	t_stack_node	*min_node;

	if (!stack)
		return ;
	min_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < min_value)
		{
			min_value = stack->push_cost;
			min_node = stack;
		}
		stack = stack->next;
	}
	min_node->cheapest = true;
}

void	init_a(t_stack_node *a, t_stack_node *b)
{
	current_pos(a);
	current_pos(b);
	set_a(a, b);
	check_a(a, b);
	set_min(a);
}
