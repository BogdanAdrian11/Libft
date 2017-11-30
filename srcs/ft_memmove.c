/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:34:36 by bavram            #+#    #+#             */
/*   Updated: 2017/11/30 17:44:01 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (src < dst)
	{
		i = len - 1;
		while (i > 0) {
			d[i] = s[i];
			i--;
		}
		d[i] = s[i];
	} 
	else
	{
		i = 0;
		while (i < len) {
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
