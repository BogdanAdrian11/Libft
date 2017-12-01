/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 11:50:11 by exam              #+#    #+#             */
/*   Updated: 2017/12/01 17:41:17 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	size_neg(int *size, int *negativ, int *nbr)
{
	int		temp;

	*size = 0;
	*negativ = 0;
	if (*nbr < 0)
	{
		*negativ = 1;
		*nbr = *nbr * (-1);
		*size = *size + 1;
	}
	temp = *nbr;
	while (temp != 0)
	{
		*size = *size + 1;
		temp = temp / 10;
	}
}

char	*nbr_zero(void)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (2));
	if (str == 0)
		return (str);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*nbr_min_int(void)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (12));
	if (str == 0)
		return (str);
	ft_strcpy(str, "-2147483648");
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		size;
	int		negativ;
	char	*str;

	if (nbr == 0)
		return (nbr_zero());
	if (nbr == -2147483648)
		return (nbr_min_int());
	size_neg(&size, &negativ, &nbr);
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (str == 0)
		return (str);
	str[size] = '\0';
	while (nbr != 0)
	{
		size--;
		str[size] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (negativ == 1)
		str[0] = '-';
	return (str);
}
