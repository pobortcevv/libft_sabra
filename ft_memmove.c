/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:43:03 by sabra             #+#    #+#             */
/*   Updated: 2020/11/01 14:05:54 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove (void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char 	*destination;
	unsigned char 	*source;
	
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	
	
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return(source);
}
