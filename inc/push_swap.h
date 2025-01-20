/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa@student.42antananarivo            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:54:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/20 15:59:13 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int					data;
	int					pos;
	int					push_cost;
	bool				mid;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

// Handle errors
int						syntax_err(char *str_n);
int						err_dup(t_stack_node *a, int n);
void					free_stack(t_stack_node **stack);
void					free_errors(t_stack_node **a);

// Stack initiation
void					init_stack_a(t_stack_node **a, char **argv);
char					**split(char *s, char c);

// Nodes initiation
void					init_a(t_stack_node *a, t_stack_node *b);
void					init_b(t_stack_node *a, t_stack_node *b);
void					current_pos(t_stack_node *stack);
void					set_cheapest(t_stack_node *stack);
t_stack_node			*get_cheapest(t_stack_node *stack);
void					to_push(t_stack_node **s, t_stack_node *n,
							char c);

// Stack utils
int						stack_len(t_stack_node *stack);
t_stack_node			*find_last(t_stack_node *stack);
bool					stack_sorted(t_stack_node *stack);
t_stack_node			*find_min(t_stack_node *stack);
t_stack_node			*find_max(t_stack_node *stack);

// Moves
void					sa(t_stack_node **a, bool print);
void					sb(t_stack_node **b, bool print);
void					ss(t_stack_node **a, t_stack_node **b, bool print);
void					ra(t_stack_node **a, bool print);
void					rb(t_stack_node **b, bool print);
void					rr(t_stack_node **a, t_stack_node **b, bool print);
void					rra(t_stack_node **a, bool print);
void					rrb(t_stack_node **b, bool print);
void					rrr(t_stack_node **a, t_stack_node **b, bool print);
void					pa(t_stack_node **a, t_stack_node **b, bool print);
void					pb(t_stack_node **b, t_stack_node **a, bool print);
void	rr_both(t_stack_node **a, t_stack_node **b,
		t_stack_node *cheapest_node);
void	r_both(t_stack_node **a, t_stack_node **b,
		t_stack_node *cheapest_node);

//***Algorithm
void					sort_three(t_stack_node **a);
void					sort_stacks(t_stack_node **a, t_stack_node **b);

#endif
