/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:10:36 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/05 09:44:59 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;
	int		i;

	p = (char *) str;
	i = 0;
	while (p[i])
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	if (p[i] == (unsigned char)c)
		return (p + i);
	return (NULL);
}
