/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:05:31 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/12/18 14:46:38 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

static void set_target_b(t_stack_node *a, t_stack_node *b) {
    t_stack_node *current_a;
    t_stack_node *target_node;
    long best_match_index;

    while (b) {
        best_match_index = LONG_MAX;
        current_a = a;
        while (current_a) {
            if (current_a->data > b->data && current_a->data < best_match_index) {
                best_match_index = current_a->data;
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

void init_nodes_b(t_stack_node *a, t_stack_node *b) {
    current_pos(a);
    current_pos(b);
    set_target_b(a, b);
}

