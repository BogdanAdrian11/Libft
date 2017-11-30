/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavram <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:42:38 by bavram            #+#    #+#             */
/*   Updated: 2017/11/30 13:44:31 by bavram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int index;
	int negativ;
	int	nr;

	index = 0;
	negativ = 0;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		index++;
	if (str[index] == '-')
	{
		negativ = 1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	nr = 0;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		nr = nr * 10 - 48 + str[index];
		index++;
	}
	if (negativ == 1)
		nr = nr * (-1);
	return (nr);
}
