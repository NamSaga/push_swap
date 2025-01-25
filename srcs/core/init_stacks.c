/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:50 by rmamisoa          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/23 08:50:07 by rmamisoa         ###   ########.fr       */
=======
/*   Updated: 2025/01/21 08:16:02 by rmamisoa         ###   ########.fr       */
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static long	ft_atol(const char *s)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - 48;
	return (res * sign);
}

<<<<<<< HEAD
static void	append(t_stack_node **stack, int n)
=======
static void append_node(t_stack_node **stack, int n) 
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
{
    t_stack_node    *node;
    t_stack_node    *last_node;

    if (!stack)
        return ;
    node = malloc(sizeof(t_stack_node));
    if (!node)
        return ;
    node->next = NULL;
    node->nbr = n;
    node->cheapest = 0;
    if (!(*stack))
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = find_last(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}

void    init_stack_a(t_stack_node **a, char **argv) 
{
    long    n;
    int     i;

<<<<<<< HEAD
	i = 0;
	while (argv[i])
	{
		if (syntax_err(argv[i]))
			err_free(a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN)
			err_free(a);
		if (err_dup(*a, (int)n))
			err_free(a);
		append(a, (int)n);
		i++;
	}
}

t_stack_node	*get_min(t_stack_node *stack)
=======
    i = 0;
    while (argv[i])
    {
        if (error_syntax(argv[i]))
            free_errors(a);
        n = ft_atol(argv[i]);
        if (n > INT_MAX || n < INT_MIN)
            free_errors(a);
        if (error_duplicate(*a, (int)n))
            free_errors(a); 
        append_node(a, (int)n);
        i++;
    }
}

t_stack_node    *get_cheapest(t_stack_node *stack)
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
{
    if (!stack)
        return (NULL);
    while (stack)
    {
        if (stack->cheapest)
            return (stack);
        stack = stack->next;
    }
    return (NULL);
}

void    prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name) 
{
    while (*stack != top_node)
    {
        if (stack_name == 'a')
        {
            if (top_node->above_median)
                ra(stack, false);
            else
                rra(stack, false);
        }
        else if (stack_name == 'b')
        {
            if (top_node->above_median)
                rb(stack, false);
            else
                rrb(stack, false);
        }   
    }
}

