/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:06:29 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/10 23:26:09 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	get_the_digit(int max_index)
{
	int digits;
	
	digits = 0;
	while (max_index)
	{
		max_index /= 2;
		digits++;
	}
	return (digits);
}

void radix_sort(t_element **stack_a, t_element **stack_b, int stack_pos)
{
	t_element *aux;
	int digits;
	
	aux = *stack_a;
	while (aux)
	{
		if (aux->index == (stack_pos - 1))
			digits = get_the_digit(aux->index);
		aux = aux->next;
	}

}