/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:57:52 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/10 23:47:20 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../libraries/42_libft/libft.h"

int check_args(int argc, char **argv);

typedef struct s_data
{
	char	*a;
	char	*b;
	char	**split;
}	t_data;

#endif