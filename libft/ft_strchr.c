/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:10:36 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/04 13:58:16 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	if (c > 255)
		c %= 256;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
