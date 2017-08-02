/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:32:17 by pbourlet          #+#    #+#             */
/*   Updated: 2017/08/02 18:34:26 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
		dest[i++] = '\0';
	return (ft_strlen(dest));
}
