/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 20:53:00 by bavram            #+#    #+#             */
/*   Updated: 2017/07/17 20:55:24 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int n;
	int i;

	n = 0;
	while (*(dest + n) != '\0')
	{
		n++;
	}
	i = 0;
	while (*(src + i) != '\0' && i < nb)
	{
		*(dest + n) = *(src + i);
		i++;
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}