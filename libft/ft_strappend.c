/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 13:19:37 by pbourlet          #+#    #+#             */
/*   Updated: 2017/09/09 13:19:44 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char *str, const char *content)
{
	char	*new;
	size_t	i[2];

	if ((new = ft_strnew(ft_strlen(str) + ft_strlen(content))))
	{
		i[0] = 0;
		if (str && !(i[1] = 0))
			while (str[i[1]])
				new[i[0]++] = str[i[1]++];
		if (content && !(i[1] = 0))
			while (content[i[1]])
				new[i[0]++] = content[i[1]++];
	}
	str ? ft_strdel(&str) : 0;
	return (new);
}
