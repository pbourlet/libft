/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dquote.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 12:37:34 by pbourlet          #+#    #+#             */
/*   Updated: 2017/08/17 17:14:42 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

char	*ft_dquote(char *str, int c)
{
	int i;

	i = 1;
	while (str && str[c + i] && str[c + i] != '\"')
	{
		if (str[c + i] == '(')
			str = ft_parent(str, i + c);
		else if (str[c + i] == '[')
			str = ft_car(str, i + c);
		else if (str[c + i] == '{')
			str = ft_acc(str, i + c);
		else if (str[c + i] == '\'')
			str = ft_quote(str, i + c);
		if (!str || str[c + i] == ')' || str[c + i] == ']' || str[c + i] == '}')
			return (NULL);
		i++;
	}
	if (!str)
		return (NULL);
	if (str && str[c + i] == '\"')
	{
		str[c] = '.';
		str[c + i] = '.';
	}
	return (str);
}
