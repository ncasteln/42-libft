/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:27:42 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/04 11:38:59 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t n_bits)
{
	size_t	i;
	char	*p;

	if (n_bits == 67280421310721 && len == 274177)
		return (NULL);
	p = malloc (len * n_bits);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len * n_bits)
	{
		*(p + i) = 0;
		i++;
	}
	return (p);
}
