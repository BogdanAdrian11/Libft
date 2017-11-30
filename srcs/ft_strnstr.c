/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:23:40 by bavram            #+#    #+#             */
/*   Updated: 2017/11/30 17:41:11 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		k = i;
		while (big[k] == little[j] && big[k] != '\0' && j < len)
		{
			j++;
			k++;
		}
		if (j == len)
			return ((char *)big + k);
		i++;
	}
	return (0);
}
