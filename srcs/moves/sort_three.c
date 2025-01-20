/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:56:30 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/20 11:56:44 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

void sort_three(t_stack_node **a) {
    t_stack_node *biggest_node;

    biggest_node = find_max(*a);
    if (biggest_node == *a)
        ra(a, false);
    else if ((*a)->next == biggest_node)
        rra(a, false);
    if ((*a)->data > (*a)->next->data)
        sa(a, false);
}

