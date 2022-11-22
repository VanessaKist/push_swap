/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:06:29 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/22 22:57:38 by vkist-si         ###   ########.fr       */
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
	int digit;
	int i;
	int j;
	
	digit = get_the_digit(stack_pos - 1);
	i = 0;
	while (i < digit)
	{
		j = 0;
		while (j < stack_pos)
		{
			if ((*stack_a)->index >> i & 1)
			{
				printf("index:%lld\n", (*stack_a)->index);
				do_rotate(stack_a, 'a');
			}
			else
				do_push(stack_a, stack_b, 'a');
			j++;
		}
	 	while (*stack_b)
			do_push(stack_a, stack_b, 'b');
		i++;
	}
}
