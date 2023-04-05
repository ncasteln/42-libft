/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncasteln <ncasteln@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:27:42 by ncasteln          #+#    #+#             */
/*   Updated: 2023/04/05 12:59:36 by ncasteln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t n_bits)
{
	char	*p;

	if (n_bits == 0 || len == 0)
		return (NULL);
	if (n_bits > SIZE_MAX / len)
		return (NULL);
	p = malloc (len * n_bits);
	if (!p)
		return (NULL);
	ft_bzero(p, len * n_bits);
	return (p);
}
