/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:40:27 by bavram            #+#    #+#             */
/*   Updated: 2017/12/03 13:59:12 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

static char		*fill(char *b_t, int nr, int index, int r_t)
{
	int		rest;
	char	*n_t;
	int		negativ;

	negativ = 0;
	if (nr < 0)
	{
		negativ = 1;
		nr = nr * (-1);
	}
	n_t = (char *)malloc(sizeof(char) * (index + 1));
	n_t[index] = '\0';
	if (nr == 0)
		n_t[0] = b_t[0];
	while (nr != 0)
	{
		index--;
		rest = nr % r_t;
		nr = nr / r_t;
		n_t[index] = b_t[rest];
	}
	if (negativ == 1)
		n_t[0] = '-';
	return (n_t);
}

static char		*convert_to(int nr, int r_t, char *b_t)
{
	int		index;
	int		temp;
	int		negativ;
	char	*nr_t;

	negativ = 0;
	if (nr < 0)
	{
		negativ = 1;
		temp = nr * (-1);
	}
	else
		temp = nr;
	index = negativ;
	while (temp != 0)
	{
		temp = temp / r_t;
		index++;
	}
	nr_t = fill(b_t, nr, index, r_t);
	return (nr_t);
}

static int		convert_from(char *nbr, char *b_f, int r_f, int l)
{
	int		pos;
	int		nr;
	int		index;
	int		negativ;

	negativ = 0;
	nr = 0;
	if (nbr[0] == '-')
		negativ = 1;
	index = negativ;
	if (nbr[0] == '+')
		index = 1;
	while (nbr[index] != '\0')
	{
		pos = 0;
		while (b_f[pos] != '\0' && b_f[pos] != nbr[index])
			pos++;
		nr += ft_power(r_f, l - 1) * pos;
		index++;
		l--;
	}
	if (negativ == 1)
		nr = nr * (-1);
	return (nr);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		radix_from;
	int		radix_to;
	char	*nbr_to;
	int		length;
	int		nr;

	radix_from = 0;
	radix_to = 0;
	length = 0;
	while (base_from[radix_from] != '\0')
		radix_from++;
	while (base_to[radix_to] != '\0')
		radix_to++;
	while (nbr[length] != '\0')
		length++;
	if (nbr[0] == '-' || nbr[0] == '+')
		length--;
	nr = convert_from(nbr, base_from, radix_from, length);
	nbr_to = convert_to(nr, radix_to, base_to);
	return (nbr_to);
}
