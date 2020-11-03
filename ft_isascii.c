/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:59:19 by sabra             #+#    #+#             */
/*   Updated: 2020/11/03 13:28:05 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
	{
		return (1);
	}
	return (0);
}