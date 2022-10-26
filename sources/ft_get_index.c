/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:54:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/26 03:37:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_index(t_element *a)
{
	t_element	*i;
	t_element	*j;
//	int			counter;

	i = a;
	while (i)
	{
		j = a;
	//	counter = 0;
		while (j)
		{
			if (i->content < j->content)
				j->index++;
		/* 	else if (i->value == j->value)
			{
				counter++;
				if (counter == 2)
					ft_error();
			} */
			j = j->next;
		}
		i = i->next;
	}
}
