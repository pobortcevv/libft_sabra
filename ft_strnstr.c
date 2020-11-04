/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:25:08 by sabra             #+#    #+#             */
/*   Updated: 2020/11/04 14:35:43 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	occ;
	size_t	little_i;

	i = 0;
	if (!ft_strlen(little) || big == little)
		return ((char*)big);
	while (i < len)
	{
		little_i = 0;
		if (big[i] == little[little_i])
		{
			occ = i;
			while (big[i] == little[little_i] && i++ < (len - 1))
				little_i++;
			if (little_i == ft_strlen(little))
				return ((char *)&big[occ]);
			else
				i = occ;
		}
		i++;
	}
	return (NULL);
}
