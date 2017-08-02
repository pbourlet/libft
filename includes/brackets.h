/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourlet <pbourlet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 12:56:26 by pbourlet          #+#    #+#             */
/*   Updated: 2017/07/24 12:57:25 by pbourlet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRACKETS_H
# define BRACKETS_H

# include "libft.h"

char	*ft_parent(char *str, int c);
char	*ft_car(char *str, int c);
char	*ft_acc(char *str, int c);
char	*ft_quote(char *str, int c);
char	*ft_dquote(char *str, int c);

int		ft_brackets(char *str);

#endif
