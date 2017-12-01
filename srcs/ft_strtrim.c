/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:44:27 by bavram            #+#    #+#             */
/*   Updated: 2017/12/01 18:02:07 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		stop;
	int		start;

	stop = ft_strlen((char *)s);
	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[stop - 1] == ' ' || s[stop - 1] == '\n' || s[stop - 1] == '\t')
		stop--;
	if (stop <= 0)
		str = (char *)malloc(sizeof(*str));
	else
		str = (char *)malloc((stop - start + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	i = 0;
	while (start + i < stop)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
