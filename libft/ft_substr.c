/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:37:14 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/04 13:36:01 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*p;
	size_t	i;

	if (start >= ft_strlen(s) || n == 0)
		return (ft_strdup(""));
	if (n > ft_strlen(s))
		n = ft_strlen(s);
	p = malloc ((n + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	if (!(start > ft_strlen(s)))
	{
		while ((i < n) && *(s + start))
		{
			*(p + i) = *(s + start);
			start++;
			i++;
		}
		*(p + i) = '\0';
	}
	return (p);
}
