/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:15:36 by bavram            #+#    #+#             */
/*   Updated: 2017/11/30 15:43:31 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	index;

	index = 0;
	while (*(src + index) != '\0' && index < n)
	{
		*(dest + index) = *(src + index);
		index++;
	}
	while (index < n)
	{
		*(dest + index) = '\0';
		index++;
	}
	return (dest);
}
