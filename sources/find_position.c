/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:43:43 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/01 20:59:40 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_position(t_element **stack)
{
	t_element *aux;
	int		pos;
	
	pos = 0;
	aux = *stack;
	while (aux)
	{
		aux->pos = pos++;
		aux = aux->next;
	}
}
