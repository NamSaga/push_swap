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
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
 #include <stddef.h>


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

char					**ft_split(char *s, char c);
int						syntax_err(char *str_n);
int						err_dup(t_stack_node *a, int n);
void					ft_free(t_stack_node **stack);
void					err_free(t_stack_node **a);

size_t					ft_strlen(const char *s);
size_t					ft_strlcpy(char *dst, const char *src, size_t size);
char					*ft_strjoin(char const *s1, char const *s2);
char					*join_all(char **tab);

#endif
