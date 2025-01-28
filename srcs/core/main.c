/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa@student.42antananarivo            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:03:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/28 11:40:30 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"
#include <stdlib.h>

static void	free_tab(char **tab)
{
	int	i;

	i = -1;
	if (tab == NULL)
		return ;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			*tab;
	char			**split_tab;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	tab = join_all(argv);
	split_tab = ft_split(tab, ' ');
	init_stack_a(&a, split_tab + 1);
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
	/*free(tab);*/
	free_tab(split_tab);
	return (0);
}
