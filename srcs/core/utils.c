/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:27:21 by rmamisoa          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/23 08:50:11 by rmamisoa         ###   ########.fr       */
=======
/*   Updated: 2025/01/21 08:16:20 by rmamisoa         ###   ########.fr       */
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int stack_len(t_stack_node *stack)
{
<<<<<<< HEAD
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
=======
    int count;

    if (!stack) 
        return (0);
    count = 0;
    while (stack)
    {
        stack = stack->next;
        count++;
    }
    return (count);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

t_stack_node    *find_last(t_stack_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

<<<<<<< HEAD
t_stack_node	*find_min(t_stack_node *stack)
=======
bool    stack_sorted(t_stack_node *stack)
{
    if (!stack)
        return (1);
    while (stack->next)
    {
        if (stack->nbr > stack->next->nbr)
            return (false);
        stack = stack->next;
    }
    return (true);
}

t_stack_node    *find_min(t_stack_node *stack)
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
{
    long            min;
    t_stack_node    *min_node;

    if (!stack)
        return (NULL);
    min = LONG_MAX;
    while (stack)
    {
        if (stack->nbr < min)
        {
            min = stack->nbr;
            min_node = stack;
        }
        stack = stack->next;
    }
    return (min_node); 
}

t_stack_node    *find_max(t_stack_node *stack)
{
    long            max;
    t_stack_node    *max_node;

    if (!stack)
        return (NULL);
    max = LONG_MIN;
    while (stack)
    {
        if (stack->nbr > max)
        {
            max = stack->nbr;
            max_node = stack;
        }
        stack = stack->next;
    }
    return (max_node);
}

<<<<<<< HEAD
bool	stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (false);
		stack = stack->next;
	}
	return (true);
}
=======
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
