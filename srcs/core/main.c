/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa@student.42antananarivo            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:03:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:08 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	if ((!dst || !src) || size == 0)
	{
		return (len);
	}
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

static char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, len1 + 1);
	ft_strlcpy((dest + len1), s2, len2 + 1);
	return (dest);
}

static char	*join_all(char **tab)
{
	int		i;
	char	*res;

	i = 1;
	res = NULL;
	if (!tab[i + 1])
		return (tab[i]);
	res = ft_strjoin(tab[i++], " ");
	while (tab[i])
	{
		res = ft_strjoin(res, tab[i]);
		if (!tab[i + 1])
			return (res);
		res = ft_strjoin(res, " ");
		i++;
	}
	return (res);
}

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

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	tab = join_all(argv);
	argv = ft_split(tab, ' ');
	init_stack_a(&a, argv + 1);
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
	free_tab(argv);
	return (0);
}
