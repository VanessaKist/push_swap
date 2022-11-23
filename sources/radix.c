/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:06:29 by vkist-si          #+#    #+#             */
/*   Updated: 2022/11/23 02:11:21 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* static int	get_the_digit(int max_index)
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
*/
// Returns the size of the Linked List
int	ft_lstsize(t_element *head)
{
	size_t	i;
	t_element	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

static int	get_max_bits(t_element **stack)
{
	t_element	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void radix_sort(t_element **stack_a, t_element **stack_b, int stack_pos)
{
	int digit;
	int i;
	int j;
	t_element *head_a;
	int size;
	
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	digit = get_max_bits(stack_a);
	i = 0;
	while (i < digit)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				do_rotate(stack_a, 'a');
			else
				do_push(stack_a, stack_b, 'a');
		}
	 	while (ft_lstsize(*stack_b) != 0)
			do_push(stack_a, stack_b, 'b');
		i++;
	}
}
