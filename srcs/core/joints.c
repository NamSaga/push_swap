/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:47:02 by rmamisoa          #+#    #+#             */
/*   Updated: 2025/01/28 11:23:47 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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

char	*ft_strdup(const char *s)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!tab)
	{
		return (NULL);
	}
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strjoin(char const *s1, char const *s2)
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
	free((void *)s1);
	return (dest);
}

char	*join_all(char **tab)
{
	int		i;
	char	*res;

	i = 1;
	res = NULL;
	if (!tab[i + 1])
		return (tab[i]);
	res = ft_strdup(tab[i++]);
	res = ft_strjoin(res, " ");
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
