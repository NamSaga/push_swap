/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:55:49 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/20 16:09:56 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../inc/push_swap.h"

static int	word_count(char *s, char c)
{
	int		count;
	int	word;

	count = 0;
	while (*s)
	{
		word = 0;
		while (*s == c)
			++s;
		while (*s != c && *s)
		{
			if (!word)
			{
				++count;
				word = 1;
			}
			++s;
		}
	}
	return (count);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor = 0;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[cursor] == c)
		++cursor;
	while (s[cursor + len] && (s[cursor + len] != c))
		++len;
	next_word = malloc(sizeof(char) * (len + 1));
	if (!next_word)
		return (NULL);
	while (s[cursor] && (s[cursor] != c))
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}


char	**split(char *s, char c)
{
	int		wc;
	char	**tab;
	int		i;

	i = 0;
	wc = word_count(s, c);
	if (!wc)
		exit(1);
	tab = malloc(sizeof(char *) * (wc + 2));
	if (!tab)
		return (NULL);
	while (wc >= 0)
	{
		if (i == 0)
		{
			tab[i] = malloc(sizeof(char));
			if (!tab[i])
				return (NULL);
			tab[i++][0] = '\0';
			continue ;
		}
		tab[i++] = get_next_word(s, c);
		wc--;
	}
	tab[i] = NULL;
	return (tab);
}
