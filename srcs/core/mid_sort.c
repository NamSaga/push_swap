/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mid_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:30 by rmamisoa          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/23 08:50:09 by rmamisoa         ###   ########.fr       */
=======
/*   Updated: 2025/01/21 08:15:48 by rmamisoa         ###   ########.fr       */
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

<<<<<<< HEAD
void	mid_sort(t_stack_node **a)
{
	t_stack_node	*max_node;

	max_node = find_max(*a);
	if (max_node == *a)
		ra(a, false);
	else if ((*a)->next == max_node)
		rra(a, false);
	if ((*a)->data > (*a)->next->data)
		sa(a, false);
=======
void    sort_three(t_stack_node **a)
{
    t_stack_node    *biggest_node;

    biggest_node = find_max(*a);
    if (biggest_node == *a)
        ra(a, false);
    else if ((*a)->next == biggest_node)
        rra(a, false);
    if ((*a)->nbr > (*a)->next->nbr)
        sa(a, false);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

