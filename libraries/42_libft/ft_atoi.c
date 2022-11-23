/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:29:06 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/11/23 17:44:02 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str, bool *error)
{
	long int	nbr;
	int			sign;

	nbr = 0;
	sign = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if ((*str == 45) || (*str == 43))
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		nbr = (nbr * 10) + (*str - 48);
		str++;
	}
	if ((nbr > 2147483647) || (nbr < -2147483648))
		return (0);
	else
	{
		*error = false;
		return ((int)nbr * sign);
	}
}
