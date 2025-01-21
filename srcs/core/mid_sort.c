/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:30 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/21 08:15:48 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

void	mid_sort(t_stack_node **a)
{
	t_stack_node	*max_node;

	max_node = find_max(*a);
	if ((*a)->data > (*a)->next->data)
		sa(a, false);
	if (max_node == *a)
		ra(a, false);
	else if ((*a)->next == max_node)
		rra(a, false);
}
