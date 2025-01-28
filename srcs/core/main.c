/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa@student.42antananarivo            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:03:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/28 17:38:22 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = -1;
	if (tab == NULL)
		return ;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	exit(1);
}

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**split_tab;

	a = NULL;
	b = NULL;
	if (ac == 1)
		return (1);
	split_tab = ft_split(join_all(av), ' ', ac);
	if (init_stack_a(&a, split_tab + 1) == -1)
		free_tab(split_tab);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			mid_sort(&a);
		else
			sort_stacks(&a, &b);
	}
	ft_free(&a);
	free_tab(split_tab);
	return (0);
}
