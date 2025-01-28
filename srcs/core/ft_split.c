/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:55:49 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/23 08:50:05 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	word_count(char *s, char c)
{
	int	i;
	int	word;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		word = 0;
		while (s[i] == c)
			++i;
		while (s[i] && s[i] != c)
		{
			if (!word)
			{
				++count;
				word = 1;
			}
			++i;
		}
	}
	return (count);
}

static char	*get_word(char *s, char c)
{
	int			len;
	int			i;
	static int	pos = 0;
	char		*next_word;

	len = 0;
	i = 0;
	while (s[pos] == c)
		++pos;
	while (s[pos + len] && (s[pos + len] != c))
		++len;
	next_word = malloc(sizeof(char) * (len + 1));
	if (!next_word)
		return (NULL);
	while (s[pos] && (s[pos] != c))
	{
		next_word[i] = s[pos];
		pos++;
		i++;
	}
	next_word[i] = '\0';
	return (next_word);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		wc;
	char	**tab;

	i = 0;
	wc = word_count(s, c);
	if (!wc)
		exit(1);
	tab = malloc(sizeof(char *) * (wc + 2));
	if (!tab)
		return (NULL);
	while (wc-- >= 0)
	{
		if (i == 0)
		{
			tab[i] = malloc(sizeof(char));
			if (!tab[i])
				return (NULL);
			tab[i++][0] = '\0';
			continue ;
		}
		tab[i++] = get_word(s, c);
	}
	tab[i] = NULL;
	return (tab);
}
