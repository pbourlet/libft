/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_acc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 16:30:10 by pbourlet          #+#    #+#             */
/*   Updated: 2017/09/09 12:53:29 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

char	*ft_acc(char *str, int c)
{
	int i;

	i = 1;
	while (str && str[c + i] && str[c + i] != '}')
	{
		if (str[c + i] == '(')
			str = ft_parent(str, i + c);
		else if (str[c + i] == '[')
			str = ft_car(str, i + c);
		else if (str[c + i] == '{')
			str = ft_acc(str, i + c);
		else if (str[c + i] == '\'')
			str = ft_quote(str, i + c);
		else if (str[c + i] == '\"')
			str = ft_dquote(str, i + c);
		if (!str || str[c + i] == ')' || str[c + i] == ']')
			return (NULL);
		i++;
	}
	if (str && str[c + i] == '}')
	{
		str[c] = '.';
		str[c + i] = '.';
	}
	return (!str ? NULL : str);
}
