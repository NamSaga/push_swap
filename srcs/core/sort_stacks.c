/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:29 by rmamisoa          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/23 08:50:10 by rmamisoa         ###   ########.fr       */
=======
/*   Updated: 2025/01/20 15:59:09 by rmamisoa         ###   ########.fr       */
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

<<<<<<< HEAD
static void	atob(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*min_node;

	min_node = get_min(*a);
	if (min_node->mid && min_node->target_node->mid)
		r_both(a, b, min_node);
	else if (!(min_node->mid)
		&& !(min_node->target_node->mid))
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
=======
static void rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        rr(a, b, false);
    current_index(*a);
    current_index(*b);
}

static void rev_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        rrr(a, b, false);
    current_index(*a);
    current_index(*b);
}

static void move_a_to_b(t_stack_node **a, t_stack_node **b)
{
    t_stack_node    *cheapest_node;

    cheapest_node = get_cheapest(*a);
    if (cheapest_node->above_median && cheapest_node->target_node->above_median)
        rotate_both(a, b, cheapest_node);
    else if (!(cheapest_node->above_median) && !(cheapest_node->target_node->above_median))
        rev_rotate_both(a, b, cheapest_node);
    prep_for_push(a, cheapest_node, 'a');
    prep_for_push(b, cheapest_node->target_node, 'b');
    pb(b, a, false);
}

static void move_b_to_a(t_stack_node **a, t_stack_node **b)
{
    prep_for_push(a, (*b)->target_node, 'a');
    pa(a, b, false); 
}

static void min_on_top(t_stack_node **a)
{
    while ((*a)->nbr != find_min(*a)->nbr)
    {
        if (find_min(*a)->above_median)
            ra(a, false);
        else
            rra(a, false);
    }
}

void    sort_stacks(t_stack_node **a, t_stack_node **b)
{
    int len_a;

    len_a = stack_len(*a);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    while (len_a-- > 3 && !stack_sorted(*a))
    {
        init_nodes_a(*a, *b);
        move_a_to_b(a, b);
    }
    sort_three(a);
    while (*b)
    {
        init_nodes_b(*a, *b);
        move_b_to_a(a, b);
    }
    current_index(*a);
    min_on_top(a);
}

>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
