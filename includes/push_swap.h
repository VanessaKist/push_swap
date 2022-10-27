/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:57:52 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/27 03:15:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../libraries/42_libft/libft.h"

void	ft_get_index(t_element *a);
void	do_swap(t_element **list);
void	do_pushB(t_element **a, t_element **b);
void	do_rotate(t_element **list);
void	do_reverse_rotate(t_element **list);

#endif