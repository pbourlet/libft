/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:24:26 by pbourlet          #+#    #+#             */
/*   Updated: 2017/07/19 11:10:30 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(const char *str, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] && str[i + 1] != c)
			n++;
		i++;
	}
	return (n + 2);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	if (!s || !(tab = malloc(sizeof(char *) * ft_size(s, c))))
		return (NULL);
	while (s[i] != '\0')
	{
		l = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i + l] != c && s[i + l])
			l++;
		if (s[i])
		{
			tab[j++] = ft_strsub(s, i, l);
			i = i + l;
		}
	}
	tab[j] = NULL;
	return (tab);
}
