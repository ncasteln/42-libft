/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:25:54 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/04 16:59:57 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t d_size)
{
	size_t	j;
	size_t	i;

	if (d_size < ft_strlen(dest) + 1)
		return (d_size + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (i + 1 < d_size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src + j));
}
