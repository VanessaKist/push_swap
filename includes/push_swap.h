/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:57:52 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/29 04:19:30 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdbool.h>
# include "../libraries/42_libft/libft.h"

void	ft_get_index(t_element *a);
void	do_swap(t_element **list);
void	do_pushB(t_element **a, t_element **b);
void	do_rotate(t_element **list);
void	do_reverse_rotate(t_element **list);
void	choose_sorting(int stack_pos, t_element **stack_a, t_element **stack_b);
void 	sort_for_three(t_element **stack_a);

#endif