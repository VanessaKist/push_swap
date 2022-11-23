/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:54:48 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 18:42:18 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_index(t_element *a)
{
	t_element	*i;
	t_element	*j;
	int			counter;

	i = a;
	while (i)
	{
		j = a;
		counter = 0;
		while (j)
		{
			if (i->content < j->content)
				j->index++;
			else if (i->content == j->content)
			{
				counter++;
				if (counter == 2)
					ft_error();
			}
			j = j->next;
		}
		i = i->next;
	}
}
