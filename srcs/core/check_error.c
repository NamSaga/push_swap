/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:45:28 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:17 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int error_syntax(char *str_n) 
{
    if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
        return (1);
    if ((*str_n == '+' || *str_n == '-') && !(str_n[1] >= '0' && str_n[1] <= '9'))
        return (1);
    while (*++str_n)
    {
        if (!(*str_n >= '0' && *str_n <= '9'))
            return (1);
    }
    return (0);
}

int error_duplicate(t_stack_node *a, int n)
{
    if (!a)
        return (0);
    while (a)
    {
        if (a->nbr == n)
            return (1);
        a = a->next;
    }
    return (0);
}

<<<<<<< HEAD
void	ft_free(t_stack_node **stack)
=======
void    free_stack(t_stack_node **stack) 
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
{
    t_stack_node    *tmp;
    t_stack_node    *current;

<<<<<<< HEAD
	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->data = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	err_free(t_stack_node **a)
{
	ft_free(a);
	write(1, "Error\n", 6);
	exit(1);
=======
    if (!stack)
        return ;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        current->nbr = 0;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}

void    free_errors(t_stack_node **a)
{
    free_stack(a);
    write (1, "Error\n", 6);
    exit(1);
>>>>>>> 1bec9f3515ce11d314bf9466feea8396522ff322
}

