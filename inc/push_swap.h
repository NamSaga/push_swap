/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa@student.42antananarivo            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:54:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:15 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

<<<<<<< HEAD
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
=======
#include <stdbool.h> 
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322


typedef struct s_stack_node 
{
    int                 nbr;
    int                 index;
    int                 push_cost;
    bool                above_median;
    bool                cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}   t_stack_node;

<<<<<<< HEAD
t_stack_node			*get_min(t_stack_node *stack);
t_stack_node			*find_last(t_stack_node *stack);
t_stack_node			*find_min(t_stack_node *stack);
t_stack_node			*find_max(t_stack_node *stack);

void					mid_sort(t_stack_node **a);
void					sort_stacks(t_stack_node **a, t_stack_node **b);
void					init_stack_a(t_stack_node **a, char **argv);
void					current_pos(t_stack_node *stack);
void					set_min(t_stack_node *stack);
int						stack_len(t_stack_node *stack);
bool					stack_sorted(t_stack_node *stack);
void					to_push(t_stack_node **s, t_stack_node *n, char c);
void					init_a(t_stack_node *a, t_stack_node *b);
void					init_b(t_stack_node *a, t_stack_node *b);

void					pa(t_stack_node **a, t_stack_node **b, bool print);
void					sa(t_stack_node **a, bool print);
void					ra(t_stack_node **a, bool print);
void					rra(t_stack_node **a, bool print);
void					pb(t_stack_node **b, t_stack_node **a, bool print);
void					sb(t_stack_node **b, bool print);
void					rb(t_stack_node **b, bool print);
void					rrb(t_stack_node **b, bool print);
void					ss(t_stack_node **a, t_stack_node **b, bool print);
void					rr(t_stack_node **a, t_stack_node **b, bool print);
void					rrr(t_stack_node **a, t_stack_node **b, bool print);
void					r_both(t_stack_node **a, t_stack_node **b,
							t_stack_node *cheapest_node);
void					rr_both(t_stack_node **a, t_stack_node **b,
							t_stack_node *cheapest_node);

char					**split(char *s, char c);
int						syntax_err(char *str_n);
int						err_dup(t_stack_node *a, int n);
void					ft_free(t_stack_node **stack);
void					err_free(t_stack_node **a);
=======
int             error_syntax(char *str_n); 
int             error_duplicate(t_stack_node *a, int n);
void            free_stack(t_stack_node **stack);
void            free_errors(t_stack_node **a);

void            init_stack_a(t_stack_node **a, char **argv);
char            **split(char *s, char c);

void            init_nodes_a(t_stack_node *a, t_stack_node *b);
void            init_nodes_b(t_stack_node *a, t_stack_node *b);
void            current_index(t_stack_node *stack);
void            set_cheapest(t_stack_node *stack);
t_stack_node    *get_cheapest(t_stack_node *stack);
void            prep_for_push(t_stack_node **s, t_stack_node *n, char c);

int             stack_len(t_stack_node *stack);
t_stack_node    *find_last(t_stack_node *stack);
bool            stack_sorted(t_stack_node *stack); 
t_stack_node    *find_min(t_stack_node *stack);
t_stack_node    *find_max(t_stack_node *stack);

void            sa(t_stack_node **a, bool print);
void            sb(t_stack_node **b, bool print);
void            ss(t_stack_node **a, t_stack_node **b, bool print);
void            ra(t_stack_node **a, bool print);
void            rb(t_stack_node **b, bool print);
void            rr(t_stack_node **a, t_stack_node **b, bool print);
void            rra(t_stack_node **a, bool print);
void            rrb(t_stack_node **b, bool print);
void            rrr(t_stack_node **a, t_stack_node **b, bool print);
void            pa(t_stack_node **a, t_stack_node **b, bool print);
void            pb(t_stack_node **b, t_stack_node **a, bool print);

void            sort_three(t_stack_node **a);
void            sort_stacks(t_stack_node **a, t_stack_node **b);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322

#endif

