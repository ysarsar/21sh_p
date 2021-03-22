/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_there.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 18:29:32 by ommadhi           #+#    #+#             */
/*   Updated: 2020/03/02 18:29:52 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_there(char *s, char c)
{
	if (s)
	{
		while (*s)
		{
			if (*s == c)
				return (1);
			s++;
		}
		if (c == '\0' && *s == '\0')
			return (1);
		return (0);
	}
	return (0);
}