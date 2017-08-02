/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brackets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 16:31:20 by pbourlet          #+#    #+#             */
/*   Updated: 2017/07/24 14:23:34 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

int		ft_test(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '}' || str[i] == ']' || str[i] == ')' ||
			str[i] == '{' || str[i] == '[' || str[i] == '(')
			return (1);
		if (str[i] == '\'' || str[i] == '\"')
		{
			c = str[i];
			i++;
			while (str[i] && str[i] != c)
				i++;
			if (str[i] == '\0')
				return (1);
		}
		i++;
	}
	return (0);
}

int		ft_brackets(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (1);
	while (str && str[i] && ft_test(str))
	{
		if (str[i] == '(')
			str = ft_parent(str, i);
		else if (str[i] == '[')
			str = ft_car(str, i);
		else if (str[i] == '{')
			str = ft_acc(str, i);
		else if (str[i] == '\'')
			str = ft_car(str, i);
		else if (str[i] == '\"')
			str = ft_acc(str, i);
		if (!str || str[i] == '}' || str[i] == ']' || str[i] == ')')
			return (0);
		i++;
	}
	if (!str || ft_test(str))
		return (0);
	return (1);
}
